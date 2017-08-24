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

using namespace std;

namespace wind {

void WhatAboutDoubleQuotes()
{
	cout << "\"" << endl;
	cout << '"' << endl;

	cout << int('"') << endl;
}

// ÈÝÆ÷value_typeÊ¹ÓÃbind
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

void WhatAboutWriteFile()
{
	ostringstream oss1, oss2;
	oss1 << "foo" << endl;

	ofstream ofs("TestWriteFile.txt", std::ofstream::app);
	if (ofs) {
		ofs << ::time(NULL) << ": Hello World" << endl;
		ofs.close();
	}
	else {
		cout << "Fail open file for ofstream" << endl;
	}
}

} // namespace wind

