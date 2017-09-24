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
#include "ToyStatic.h"

using namespace std;

namespace wind {

static int gBaseId = 100;

int CBase1::cid_ = 0;
static class CInitBase1Id {
public:
	CInitBase1Id() {
		printf("CInitBase1Id\n");
		CBase1::cid_ = gBaseId++;
	}
} gInitBase1Id;

int CBase2::cid_ = 0;
static class CInitBase2Id {
public:
	CInitBase2Id() {
		printf("CInitBase2Id\n");
		CBase2::cid_ = gBaseId++;
	}
} gInitBase2Id;

void StaticInit() {
	cout << CBase1::cid_ << endl;
	cout << CBase2::cid_ << endl;
}

// 域名限定
namespace canusee {
	const int a = 10;
}

void GetCanUSee1() {
	using canusee::a;
	cout << a << endl;
}

void GetCanUSee2() {
	using namespace canusee;
	cout << a << endl;
}

// 这个会报错
// void GetCanUSee3() {
// 	cout << a << endl;
// }


} // namespace wind

