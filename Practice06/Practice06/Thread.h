#pragma once
#include <process.h>
#include <iostream>
#include "KeyEvent.h"

using namespace std;
unsigned int __stdcall mythread(void*)
{
	int i = 0;
	while (1)
	{
		cout << GetCurrentThreadId << ": " << i++ << endl;
		Sleep(500);
	}

	return 0;

}

unsigned int __stdcall keyEvent(void*)
{
	KeyEvent k;
	int i;
	while (1)
	{
		i = k.getkey();

		switch (i)
		{
		case 37: cout << "Left key is pressed" << endl; break;
		case 38: cout << "Up key is pressed" << endl; break;
		case 39: cout << "Right key is pressed" << endl; break;
		case 40: cout << "Down key is pressed" << endl; break;
		}
	}

	return 0;
}
