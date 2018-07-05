//
//	<one line to give the program's name and a brief idea of what it does.>
//	Copyright (C) 2017. WenJin Yu. windpenguin@gmail.com.
//
//	Created at 2017/8/14 17:21:27
//	Version 1.0
//
//	This program is free software: you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation, either version 3 of the License, or
//	(at your option) any later version.
//
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License
//	along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#include "stdafx.h"

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>
#include "ToyOne.h"
#include <fstream>	// ofstream
#include <ctime>	// time
#include <sstream>	// ostringstream
#include <thread>	// this_thread
#include <iomanip>	// setw setfill

using namespace std;

int scopeNum = 10;

const map<int, int> numMap = { { 1, 1 },{ 2, 2 },{ 3,3 } };

namespace wind {

void AboutDoubleQuotes()
{
	cout << "\"" << endl;
	cout << '"' << endl;

	cout << int('"') << endl;
}

// 容器value_type使用bind
void BindAndValueType()
{
	struct SMyData
	{
		SMyData() {}
		SMyData(int a, int b) : a_(a), b_(b) {}

		int a_;
		int b_;
	};

	// copy value a of vector<SMyData> int vector<int>
	vector<SMyData> myDataVec;
	for (int i = 0; i < 10; ++i)
	{
		myDataVec.emplace_back(i, i);
	}

	vector<int> myDataVecA;
	transform(myDataVec.begin(), myDataVec.end(), std::back_inserter(myDataVecA), std::bind(&vector<SMyData>::value_type::a_, std::placeholders::_1));
	for_each(myDataVecA.begin(), myDataVecA.end(), [](int a)->void {
		printf("%d ", a);
	});
	printf("\n");


	map<int, SMyData> myDataMap;
	for (int i = 0; i < 10; ++i)
	{
		myDataMap.insert(make_pair(i, SMyData(i, i)));
	}

	vector<SMyData> resultVec1;
	transform(myDataMap.begin(), myDataMap.end(), std::back_inserter(resultVec1), std::bind(&map<int, SMyData>::value_type::second, std::placeholders::_1));
	for_each(resultVec1.begin(), resultVec1.end(), [](SMyData& myData)->void {
		printf("%d ", myData.a_);
	});
	printf("\n");
}

void AboutScope()
{
	int scopeNum = 9;

	cout << "function scope: " << scopeNum << endl;

	// 取的是全局作用域的scopeNum
	cout << "global scope: " << ::scopeNum << endl;
}

void PrintNonsenseNum()
{
	cout << "Nonsense num: " << NONSENSE_NUM << endl;
}

void TooLongString() 
{
	string str = "hello world\
hello world\
nhello world";

	cout << str << endl;
}

void TestAnoyClass() 
{
	class CAnoy {
	public:
		CAnoy() {};
		~CAnoy() { cout << "CAnoy: " << oss_.str() << endl; }
		ostringstream& OSS() { return oss_; }

	private:
		ostringstream oss_;
	};

	CAnoy().OSS() << "hello" << " " << "world" << "!";
}

void FuncVoidReturn() {
	// 没有返回值可以不写
	function<void(int, int)> func = [](int a, int b) {
		a;
		b;
	};
}

BOOL WINAPI ConsoleHandler(DWORD ctrlType) {
	//this_thread::sleep_for(chrono::seconds(5));
	//this_thread::sleep_for(chrono::milliseconds(5000));
	
	ofstream ofs("consolehandler.txt", ios::app);
	switch (ctrlType)
	{
	case CTRL_C_EVENT:
	case CTRL_CLOSE_EVENT:
		ofs << "close console" << endl;
		break;
	default:
		break;
	}
	ofs.close();

	return TRUE;
}

void TestFormatCout()
{
	cout << setw(6) << setfill('0') << "1" << "2" << endl;
}

void TestMessageBox()
{
	try {
		throw 1;
	}
	catch (int e) {
		cout << "exception: " << e << endl;
		MessageBox(NULL, "exception", "exception", MB_OK|MB_TOPMOST);
	}
}

void TestGlobalMapInit() {
	for_each(numMap.begin(), numMap.end(), [](const pair<int, int>& numPair)->void {
		cout << "num map: " << numPair.first << " " << numPair.second << endl;
	});
}

extern "C" {

int foo() {
	cout << "hello foo" << endl;
	bar();
	return 0;
}

static int bar() {
	cout << "hello bar" << endl;
	return 0;
}
}

} // namespace wind

