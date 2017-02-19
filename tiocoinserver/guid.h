#pragma once
#include <string>
#include <atlbase.h>


inline std::string NewGuid()
{
	std::string ret;
	GUID newTransaction;
	HRESULT createTransOk = CoCreateGuid(&newTransaction);

	if (SUCCEEDED(createTransOk))
	{
		LPOLESTR newTransactionSW = nullptr;
		createTransOk = StringFromCLSID(newTransaction, &newTransactionSW);
		if (SUCCEEDED(createTransOk))
		{
			char* newTransactionSA = (char*)calloc(1, wcslen(newTransactionSW) + 1);
			wcstombs(newTransactionSA, newTransactionSW, wcslen(newTransactionSW));
			ret = newTransactionSA;
			free(newTransactionSA);
			CoTaskMemFree(newTransactionSW);
		}
	}

	return ret;
}
