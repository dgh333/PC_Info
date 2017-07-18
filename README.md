# PC_Info
Report any info available via system calls about host PC

Here is a list of available system calls:
https://msdn.microsoft.com/en-us/library/windows/desktop/ms724953(v=vs.85).aspx

Some of the ones that look especially useful -

GetComputerNameEx	Retrieves the NetBIOS or DNS name of the local computer.

GetComputerObjectName	Retrieves the local computer's name in a specified format.

GetCurrentHwProfile	Retrieves the current hardware profile for the local computer.

GetFirmwareType	Retrieves the firmware type of the local computer.

GetIntegratedDisplaySize	Retrieves the best estimate of the diagonal size of the built-in screen, in inches.


GetSystemDirectory	Retrieves the path of the system directory.

GetSystemInfo	Retrieves information about the current system.

GetVersion	Retrieves the version number of the current operating system.

GetVersionEx	Retrieves information about the current operating system.

GetWindowsDirectory	Retrieves the path of the Windows directory.
