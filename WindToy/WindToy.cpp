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
#include "Toys/ToyC1061.h"
#include <Windows.h>
#include <functional>
#include <sstream>

#include <stdarg.h> // varargs

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

extern "C" {
	void TestExternC1() {
		cout << "hello " << __FUNCTION__ << " " << __FUNCDNAME__ << endl;
	}
}

extern "C" void TestExternC2() {
	cout << "hello " << __FUNCTION__ << " " << __FUNCDNAME__ << endl;
}

void TestMacroFunc(int a, int b) {
	cout << "FILE: " << __FILE__ << endl;
	cout << "LINE: " << __LINE__ << endl;
	cout << "FUNC: " << __FUNCTION__ << endl;
	cout << "FUNCTIONNAME: " << __FUNCDNAME__ << endl;
}

void TestFuture() {
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
}

// https://msdn.microsoft.com/en-us/library/zxk0tw93(v=vs.140).aspx
// __stdcall: 被调用者自己清除堆栈。The callee cleans the stack.
// __cdecl: 调用者清除堆栈。The caller cleans the stack.
// 对于具有变长参数的函数来说，因为参数数量是未知的，所以被调用者无法在编译期就确定要清除多少数据。
// 也就是说，具有变长参数的函数的类型应该是__cdecl，由调用者来清除堆栈。
// 但是在vs2015下测试使用__cdecl也是没问题的，原因在于编译器认为你肯定写错了，直接帮你把函数调用约定改成__cdecl。
void __cdecl CallingConventionOnVarArg(char* format, ...) {
	cout << "FUNCTIONNAME:" << __FUNCDNAME__ << endl;

	va_list args;
	va_start(args, format);
	vprintf(format, args);
	va_end(args);
	cout << endl;
}

class CMacroFuncInClass {
public:
	CMacroFuncInClass() {}
	void PrintMacroFunc() { cout << __FUNCTION__ << endl; }
};

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

	//TestAnoyClass();

	//AbountSprintfs();

	//TestMacroFunc(1, 2);

	//TestFuture();

	//TestExternC1();
	//TestExternC2();

	//CallingConventionOnVarArg("%s %d", "hello world", 2017);

	//CMacroFuncInClass().PrintMacroFunc();

	TestC1061();

	system("pause");
    return 0;
}

