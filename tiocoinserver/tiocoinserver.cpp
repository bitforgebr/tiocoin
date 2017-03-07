#define _CRT_SECURE_NO_WARNINGS
#include "args.h"
#include "log.h"
#include "ss.h"
#include "guid.h"
#include "chain.pb.h"
#include "..\tiodb\client\cpp\tioclient.hpp"
#include <google\protobuf\text_format.h>
#include <iostream>
#include <windows.h>
#include <conio.h>


#pragma comment(lib, "tioclient.lib")
#pragma comment(lib, "libprotobuf.lib")


using namespace std;


void Usage()
{
	cout << "tiocoinserver v. " << string(__DATE__) << string(__TIME__) << endl;
	cout << "Usage: tiocoinserver --server <required server> --port <required port> [--debug]\n";
}


int _tmain(int argc, char* argv[])
{
	map<string, string> args;
	ParseCommandLine(argc, argv, args);

	if (args.find("--debug") != args.end())
	{
		cout << "Waiting for debugger...\n";
		while (!IsDebuggerPresent())
			Sleep(1000);
	}

	Log("Starting tiocoinserver v. ", __DATE__, " ", __TIME__);

	string server = "localhost";
	int port = 2605;

	if( args.find("--port")!=args.end())
		atoi(args["--port"].c_str());
	if( args.find("--server")!=args.end())
		args["--server"];

	string address = ss() << server << ":" << port;

	if (server.empty() || port == 0)
	{
		Usage();
		return -1;
	}

	while (true)
	{
		try
		{
			tio::Connection conn;
			conn.Connect(server, port);

			if (args.find("--build") != args.end())
			{
				tio::containers::list<string> transactionsBuilder;
				transactionsBuilder.create(&conn, "transactions", "volatile_list");
				transactionsBuilder.clear();

				pb_chain pbChain;
				pbChain.set_id(0);
				pbChain.set_state("open");
				string pbChainS;
				google::protobuf::TextFormat::PrintToString(pbChain, &pbChainS);
				transactionsBuilder.push_back(pbChainS);
			}
			else if (args.find("--add") != args.end())
			{
				tio::containers::list<string> transactionsAdd;
				transactionsAdd.open(&conn, "transactions");

				if (transactionsAdd.size())
				{
					string lastChain = transactionsAdd[transactionsAdd.size() - 1];
					pb_chain pbChain;
					google::protobuf::TextFormat::ParseFromString(lastChain, &pbChain);
					string newTransaction = NewGuid();

					if (newTransaction.size())
					{
						pb_transaction* pbTransaction = pbChain.add_transaction();
						pbTransaction->set_id(newTransaction);

						string pbChainS;
						google::protobuf::TextFormat::PrintToString(pbChain, &pbChainS);
						transactionsAdd[transactionsAdd.size() - 1] = pbChainS;
					}
					else cout << "Error creating transaction\n";
				}
			}
			else if (args.find("--monitor") != args.end())
			{
				tio::containers::list<string> transactionsMonitor;
				transactionsMonitor.open(&conn, "transactions");
				transactionsMonitor.subscribe([](auto container, auto containerEvt, auto key, auto value)
				{
					int eventCode = stoi(containerEvt);

					switch (eventCode)
					{
					case TIO_COMMAND_PING:
						cout << "Ping!\n";
						break;

					case TIO_EVENT_SNAPSHOT_END:
						cout << "Snapshot end\n";
						break;

					case TIO_COMMAND_PUSH_BACK:
						///@todo validate new transaction (or chain)
						cout << "New transaction " << value << " inserted\n";
						break;

					default:
						cout << "Unknown event " << hex << eventCode << " with key " << dec << key << " and with value " << value;
						break;
					}
				});
				while (true)
				{
					conn.WaitForNextEventAndDispatch(0);
					Sleep(1000);
				}
			}
			else if (args.find("--mine") != args.end())
			{
				///@todo work to close chain
			}
			else
			{
				tio::containers::list<string> transactionsReader;
				transactionsReader.open(&conn, "transactions");
				for( size_t transactionIdx = 0; transactionIdx < transactionsReader.size(); ++transactionIdx )
					cout << "Transaction " << transactionsReader.at(transactionIdx) << endl;
			}

			break; // just testing and developing...
		}
		catch (tio::tio_exception& e)
		{
			Log("Connection error: %s", e.what());
			break;
		}
		catch (std::runtime_error& e)
		{
			Log("Runtime error: %s", e.what());
			break;
		}
		catch (...)
		{
			Log("Catastrophic error");
			break;
		}
	}

	Log("Stopping tiocoinserver v. ", __DATE__, " ", __TIME__);

	return 0;
}
