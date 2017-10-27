// WindToy.cpp : �������̨Ӧ�ó������ڵ㡣
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

// MSDN
// https://msdn.microsoft.com/en-us/library/ce3zzk1k(v=vs.140).aspx
// https://msdn.microsoft.com/en-us/library/ksazx244.aspx
// ������治����һ����Ч�����ص��������ѣ���DEBUGģʽ�����쳣�ж�
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
// __stdcall: ���������Լ������ջ��The callee cleans the stack.
// __cdecl: �����������ջ��The caller cleans the stack.
// ���ھ��б䳤�����ĺ�����˵����Ϊ����������δ֪�ģ����Ա��������޷��ڱ����ھ�ȷ��Ҫ����������ݡ�
// Ҳ����˵�����б䳤�����ĺ���������Ӧ����__cdecl���ɵ������������ջ��
// ������vs2015�²���ʹ��__cdeclҲ��û����ģ�ԭ�����ڱ�������Ϊ��϶�д���ˣ�ֱ�Ӱ���Ѻ�������Լ���ĳ�__cdecl��
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

class VolInClass {
public:
	VolInClass() {}
	~VolInClass() {}

public:
	volatile bool hasNext_;
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

	//TestC1061();

	//TooLongString();

	//TestFormatCout();

	TestMessageBox();

	// ���ֱ�ӵ�system("pause")�����ᴥ������ص�
	SetConsoleCtrlHandler(ConsoleHandler, TRUE);
	int input;
	cin >> input;


	VolInClass vol;
	vol.hasNext_ = true;

	bool hasNext;
	hasNext = false;
	if (vol.hasNext_)
		hasNext = true;

	int a;
	a = 10;
	if (hasNext)
		a = 20;

	a++;

	++a;

	a += 1;

	int b = a++;

	int c = ++a;

	atomic<int> d = 10;
	d += 20;

	unsigned int e = 0;

	unsigned int f = 100;

	unsigned int g = e - f;

	// Ĭ��Ϊ��
	shared_ptr<int> hRef = shared_ptr<int>();

	bool i = hRef ? true : false;
	if (!i)
		g = 0;

	cin >> b;

	system("pause");
    return 0;
}

