// ConsoleApplication2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>


using namespace std;

void main()
{
	int an_int = 5;
	int* a_pointer = &an_int;
	cout << "an_int = " << an_int << " and is located at " << &an_int << endl;
	cout << "a_pointer = " << a_pointer << " and is located at " << &a_pointer << endl;
}

