//
//	<one line to give the program's name and a brief idea of what it does.>
//	Copyright (C) 2017. WenJin Yu. windpenguin@gmail.com.
//
//	Created at 2017/9/8 0:10:54
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

#include "Two.h"
#include "One.h"
#include "Three.h"
#include <iostream>
using namespace std;

int a = 10;

void PrintTwo()
{
	cout << "PrintTwo=======================================" << endl;
	
	cout << "a: " << a << " " << &a << endl;

	cout << "b: " << b << " " << &b << endl;

	cout << "c: " << c << " " << &c << endl;

	cout << "d: " << d << " " << &d << endl;

	cout << "wind::e: " << wind::e << " " << &wind::e << endl;

	cout << "f: " << f << " " << &f << endl;

	cout << "h: " << h << " " << &h << endl;

	cout << "gData1: " << &gData << endl;

	cout << "gData2: " << &gData2 << endl;

	cout << endl << endl;
}
