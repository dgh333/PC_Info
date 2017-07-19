// PC_Info.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "windows.h"

int main()
{

	SYSTEM_INFO info;
	GetSystemInfo(&info);
	std::cout << "dwPageSize = " << info.dwPageSize << "\n" << "\n";
	std::cout << "lpMinimumApplicationAddress = " << info.lpMinimumApplicationAddress << "\n";
	std::cout << "lpMaximumApplicationAddress = " << info.lpMaximumApplicationAddress << "\n";
	std::cout << "dwActiveProcessorMask = " << info.dwActiveProcessorMask << "\n";
	std::cout << "dwNumberOfProcessors = " << info.dwNumberOfProcessors << "\n";
	std::cout << "dwProcessorType = " << info.dwProcessorType << "\n";
	std::cout << "dwAllocationGranularity = " << info.dwAllocationGranularity << "\n";
	std::cout << "wProcessorLevel = " << info.wProcessorLevel << "\n";
	std::cout << "wProcessorRevision = " << info.wProcessorRevision << "\n";

	OSVERSIONINFO osvi;
	osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
	GetVersionEx(&osvi);

	std::cout << "\n";

	std::cout << "dwOSVersionInfoSize = " << osvi.dwOSVersionInfoSize << "\n";
	std::cout << "dwMajorVersion = " << osvi.dwMajorVersion << "\n";
	std::cout << "dwMinorVersion = " << osvi.dwMinorVersion << "\n";
	std::cout << "dwBuildNumber = " << osvi.dwBuildNumber << "\n";
	std::cout << "dwPlatformId = " << osvi.dwPlatformId << "\n";
	std::cout << "szCSDVersion = " << osvi.szCSDVersion << "\n";

	int x;
	std::cin >> x;

	return 0;
}

