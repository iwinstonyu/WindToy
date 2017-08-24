// WindToy.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <map>
#include <iterator>		// back_inserter
#include <functional>	// bind
#include "Toys/ToyOne.h"
#include "Toys/ToyEnum.h"
#include "Toys/ToyStatic.h"

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

void BackInserter()
{
	typedef map<int, int> TNumMap;
	TNumMap nums;
	for (int i = 0; i < 3; ++i) {
		nums[i] = i;
	}

	back_insert_iterator<TNumMap> biNums(nums);

	bind(&TNumMap::value_type::second, placeholders::_1);
}

int main()
{
	printf("enter main\n");
	//WhatAboutDoubleQuotes();

	//TestDataTypeLen();

	//TestEnum();

	//BindAndValueType();

	//StaticInit();

	WhatAboutWriteFile();

	system("pause");
    return 0;
}

