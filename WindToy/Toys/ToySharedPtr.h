//
//	<one line to give the program's name and a brief idea of what it does.>
//	Copyright (C) 2017. WenJin Yu. windpenguin@gmail.com.
//
//	Created at 2017/9/6 11:04:34
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
#include <memory> // shared_ptr
using namespace std;

namespace wind {

class BaseClass {
public:
	BaseClass() {
		cout << "BaseClass Construct" << endl;
	}
	~BaseClass() {
		cout << "BaseClass Destruct" << endl;
	}
	void PrintClass() {
		cout << "BaseClass" << endl;
	}
};

class DerivedClass : public BaseClass {
public:
	DerivedClass() {
		cout << "DerivedClass Construct" << endl;
	}
	~DerivedClass() {
		cout << "DerivedClass Destruct" << endl;
	}
	void PrintClass() {
		cout << "DerivedClass" << endl;
	}
};

void AboutSharedPtr();

} // namespace wind