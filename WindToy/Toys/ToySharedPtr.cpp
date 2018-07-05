//
//	<one line to give the program's name and a brief idea of what it does.>
//	Copyright (C) 2017. WenJin Yu. windpenguin@gmail.com.
//
//	Created at 2017/9/6 11:04:44
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
#include "ToySharedPtr.h"
using namespace std;

namespace wind {

void AboutSharedPtr()
{
	// 传递的参数是DerivedClass, shared_ptr的类型是BaseClass，在析构的时候调用的是DerivedClass的析构函数
	{
		cout << "===============================" << endl;
		shared_ptr<BaseClass> bcRef(new DerivedClass);
		bcRef->PrintClass();
	}

	// 如果传递的类型是BaseClass,虽然他是从DerivedClass退化而来，但是shared_ptr析构的时候调用的是BaseClass的析构函数
	{
		cout << "===============================" << endl;
		BaseClass* pBC = new DerivedClass;
		shared_ptr<BaseClass> bcRef(pBC);
		bcRef->PrintClass();
	}

	{
		cout << "===============================" << endl;
		BaseClass* pBC = new DerivedClass;
		delete pBC;
	}

}

} // namespace wind