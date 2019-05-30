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
#include "Toys/ToyStaticLib.h"
#include <deque>
#include <Windows.h>
#include <functional>
#include <sstream>
#include <algorithm>
#include <random>

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

class VolInClass {
public:
	VolInClass() {}
	~VolInClass() {}

public:
	volatile bool hasNext_;
};

class AssignOperator {
public:
	AssignOperator() { cout << "AssignOperator default constructor" << endl; }
	AssignOperator(const AssignOperator& rhs) { cout << "AssignOperator copy constructor" << endl; }
	AssignOperator& operator=(const AssignOperator& rhs) { cout << "AssignOperator assign constructor" << endl; return *this; }
};

void AboutAssignOperator() {
	// 调用默认构造函数
	AssignOperator a1;
	// 调用拷贝构造函数
	AssignOperator a2 = a1;
	// 调用默认构造函数
	AssignOperator a3;
	// 调用赋值构造函数
	a3 = a1;
}

void AboutOstreamIt() {
	vector<int> nums;
	for (int i = 0; i < 10; ++i)
		nums.push_back(i);
	copy(nums.begin(), nums.end(), ostream_iterator<int>(std::cout, ","));
	std::cout << endl;
}

int32_t ZigZagDecode32(uint32_t n) {
	// Note:  Using unsigned types prevent undefined behavior
	int64_t n1 = -(static_cast<int64_t>(n) & 1);
	uint32_t n2 = (n >> 1);
	int32_t n3 = static_cast<int32_t>(n1 ^ n2);
	return static_cast<int32_t>((n >> 1) ^ -(static_cast<int64_t>(n) & 1));
}

void AboutDestructor()
{
	class A
	{
	public:
		A() { cout << "A construct" << endl; }
		virtual ~A() { cout << "A destruct" << endl; }
	};

	class B : public A
	{
	public:
		B() { cout << "B construct" << endl; }
		virtual ~B() { cout << "B destruct" << endl; }
	};

	{
		B b;
	}
	cout << "1===================" << endl;

	{
		B* pB = new B();
		delete pB;
	}
	cout << "2===================" << endl;

	{
		A* pB = new B();
		delete pB;
	}
	cout << "3===================" << endl;
}

namespace nsa {
	void f1() { cout << "nsa f1" << endl; }
	void f3() { cout << "nsa f3" << endl; }
}

namespace nsb {
	void f1() { cout << "nsb f1" << endl; }

	namespace nsa {
		void f2() { cout << "nsb::nsa f2" << endl; }
		void f1() { cout << "nsb::nsa f1" << endl; }
	}
}

namespace nsc {
	void f3() { cout << "nsa f3" << endl; }
}


namespace nsb {
	using namespace nsc;
}

namespace nsb {
	void test() { nsc::f3(); }
}


/// @brief shuffle在随机函数固定的情况下可重复
void TestRandomReentrant()
{
	vector<int> nums;
	for (int i = 1; i < 20; ++i) {
		nums.push_back(i);
	}
	mt19937 mt(1);
	shuffle(nums.begin(), nums.end(), mt);
	for (auto num : nums) {
		cout << num << " ";
	}
	cout << endl;
}

void TestRandom()
{
	mt19937 mt(100);
	while (true) {
		uniform_int_distribution<int> dist(0, 100);
		for (int i = 0; i < 100; ++i)
			cout << dist(mt) << endl;
		cout << endl << endl;

		Sleep(10000);
	}
}

class A
{
public:
	virtual void Greet() {
		cout << "A" << endl;
	}
};

class B : public A
{
public:
	virtual void Greet() {
		cout << "B" << endl;

		__super::Greet();
	}
};

class C : public B
{
public:
	virtual void Greet() {
		cout << "C" << endl;

		__super::Greet();
	}
};

class D
{
public:
	D() : num_(100) { cout << "Construct D" << endl; }
	D(const D& rhs) { cout << "Copy construct D" << endl; num_ = rhs.num_; }
	D& operator=(const D& rhs) { cout << "Assignment operator D" << endl; if (this == &rhs) return *this; num_ = rhs.num_; return *this; }
	~D() { cout << "Destroy D" << endl; }

	void Hello() { cout << "Hello: " << num_ << endl; }
	void SetNum(int num) { num_ = num; }

private:
	int num_;
};

void TestTuple()
{
	D d;
	d.SetNum(1);
	tuple<int, D> t1 = make_tuple(1, D());
	d.Hello();
	d.SetNum(2);
	get<1>(t1).Hello();
	get<1>(t1).SetNum(3);
	get<1>(t1).Hello();
}

enum EPos
{
	EPos_0,
	EPos_1,
};

void BitSet(uint32 val, int pos) {
	val |= pos;
}

auto TestAutoRet() {
	return make_tuple(1, 2, 3);
}

class J
{
public:
	J() { cout << "Construct J 1" << endl; }
	J(int a) : a_(a) { cout << "Construct J 2" << endl; }

	int a_ = 100;
};

class K
{
public:
	K(int x) : x_(x), y_(11) {}
	K(int x, int y) : x_(x), y_(y) {}

	void Print() {
		cout << "X: " << x_ << "  Y: " << y_ << "  J: " << j_.a_ << endl;
	}

	int x_;
	int y_ = 10;
	J j_ = J(101);
};


int main()
{
	printf("enter main\n");

	K k1(1);
	k1.Print();
	K k2(2);
	k2.Print();

	tuple<int, int, string> t = make_tuple(1, 2, "hello");
	cout << get<0>(t) << endl;
	cout << get<1>(t) << endl;
	cout << get<2>(t) << endl;

	TestRandom();

	int32_t n = ZigZagDecode32(3);

	cout << "MSC_VER: " << _MSC_VER << endl;

	AboutDestructor();

	//float aaa = 1.7f;

	//AboutAssignOperator();

	//AboutDoubleQuotes();

	//TestDataTypeLen();

	//TestEnum();

	//BindAndValueType();

	//StaticInit();

	//AboutScope();

	//AboutSharedPtr();

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

	//TestGlobalMapInit();

	//TestStaticLib();

	foo();
	// 即使包含了bar，但是由于是static函数，所以外部的bar定义对本文件来说不可见
	//bar();

	// 如果直接到system("pause")，不会触发这个回调
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

	// 默认为空
	shared_ptr<int> hRef = shared_ptr<int>();
	shared_ptr<int> hRef2 = make_shared<int>();
	shared_ptr<int> hRef3;

	bool i = hRef ? true : false;
	if (!i)
		g = 0;

	cin >> b;

	system("pause");
    return 0;
}

