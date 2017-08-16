// WindToy.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include "ToyOne.h"
#include "ToyEnum.h"

using namespace std;
using namespace wind;

void TestDataTypeLen()
{
	cout << "TestDataTypeLen============================================" << endl;

	cout << "char: " << sizeof(char) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << endl;
	cout << "unsigned long: " << sizeof(unsigned long) << endl;
	cout << "long long: " << sizeof(long long) << endl;
	cout << "unsigned long long: " << sizeof(unsigned long long) << endl;
	cout << "wchar_t: " << sizeof(wchar_t) << endl;
	cout << "char *: " << sizeof(char *) << endl;

	cout << "TestDataTypeLen============================================" << endl << endl;
}

int main()
{
	//WhatAboutDoubleQuotes();

	//TestDataTypeLen();

	TestEnum();

	system("pause");
    return 0;
}

