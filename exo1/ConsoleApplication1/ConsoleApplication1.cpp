// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <tchar.h>

#include <windows.h>
#include <iostream>
#include <math.h>

using namespace std;

typedef void(_cdecl *Add)(double a, double b, double * Aresult);

int main()
{

	double a,b,Lresult = 0;
	Add Add_func;
	HINSTANCE hdll = LoadLibrary(TEXT("C:\\srcc\\yujia\\exo1\\CPPTESTDLL.dll"));
	Add_func = (Add)GetProcAddress(hdll, "Add");
	
	cout << "A value : ";
	cin >> a;
	cout << "B value : ";
	cin >> b;
	Add_func(a, b, &Lresult);
	cout << "A + B = "<< Lresult <<endl;

	cin >> a;
	return 0;
}

