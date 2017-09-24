// WindToy.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <map>
#include <iterator>		// back_inserter
#include <functional>	// bind
#include <thread>
#include <future>
#include "Toys/ToyOne.h"
#include "Toys/ToyEnum.h"
#include "Toys/ToyStatic.h"
#include "Toys/ToySharedPtr.h"
#include <Windows.h>
#include <functional>
#include <sstream>

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

void Print1() {
	cout << "Print1" << endl;
	Sleep(3000);
	
}

void Print2() {
	cout << "Print2" << endl;

}

void FuncVoidReturn() {
	// 没有返回值可以不写
	function<void(int, int)> func = [](int a, int b) {
		a;
		b;
	};
}

// MSDN
// https://msdn.microsoft.com/en-us/library/ce3zzk1k(v=vs.140).aspx
// https://msdn.microsoft.com/en-us/library/ksazx244.aspx
// 如果缓存不够，一个无效参数回调将被唤醒，在DEBUG模式下是异常中断
void AbountSprintfs() {
	char sz[3] = "";
	if (sprintf_s(sz, 3, "%s", "123") == -1) {
		cout << "sprintf_s error" << endl;
	}
	else {
		cout << sz << endl;
	}
}

class OtherClass {

};

void TestAnoyClass() {
	class CAnoy {
	public:
		CAnoy() {};
		~CAnoy() { cout << "CAnoy: " << oss_.str() << endl; }
		ostringstream& OSS() { return oss_; }

	private:
		ostringstream oss_;
	};

	CAnoy().OSS() << "hello" << " " << "world" << "!";

	system("pause");
}


int main()
{
	printf("enter main\n");
	
	//WhatAboutDoubleQuotes();

	//TestDataTypeLen();

	//TestEnum();

	//BindAndValueType();

	//StaticInit();

	//WhatAboutWriteFile();

	//AboutScope();

	//WhatAboutSharedPtr();

	TestAnoyClass();

	//AbountSprintfs();

	std::future<int> sum = std::async([]()->int {
		cout << "Future thread: " << std::this_thread::get_id() << endl;
		//Sleep(10000);
		int sum = 0;
		for (int i = 0; i < 100; ++i) {
			sum += i;
		}
		return sum;
	});

	cout << "This thread: " << std::this_thread::get_id() << endl;

	cout << "Sum: " << sum.get() << endl;

	
	system("pause");
    return 0;
}

