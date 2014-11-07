// AwesomeApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "AwesomeClass.h"

int _tmain(int argc, _TCHAR* argv[])
{
	AwesomeClass ac;

	ac.DoSomethingAwesome();
	ac.DoSomethingEvenMoreAwesome();

	cin.get();
	return 0;
}

