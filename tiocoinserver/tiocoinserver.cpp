#define _CRT_SECURE_NO_WARNINGS
#include "args.h"
#include "log.h"
#include "ss.h"
#include "guid.h"
#include "..\tiodb\client\cpp\tioclient.hpp"
#include <iostream>
#include <windows.h>
#include <conio.h>


#pragma comment(lib, "tioclient.lib")


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
				transactionsBuilder.push_back("{00000000-0000-0000-0000-0000000000000");
			}
			else if (args.find("--add") != args.end())
			{
				tio::containers::list<string> transactionsAdd;
				transactionsAdd.create(&conn, "transactions", "volatile_list");
				string newTransaction = NewGuid();
				if( newTransaction.size())
					transactionsAdd.push_back(newTransaction);
				else
					cout << "Error creating transaction\n";
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
