//
//	<one line to give the program's name and a brief idea of what it does.>
//	Copyright (C) 2017. WenJin Yu. windpenguin@gmail.com.
//
//	Created at 2017/9/8 0:09:48
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

#pragma once

#include <iostream>
#include "One.h"
using namespace std;

class CData2 {
public:
	CData2() { cout << "CData2 construct: " << endl; }

	int& Num() { return num_; }

private:
	int num_;
};

const CData2 gData2;

const int f = 10;

enum class Fruit {
	Apple,
	Pear,
	Orange,
};

#include "Three.inl"