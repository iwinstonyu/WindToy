//
//	<one line to give the program's name and a brief idea of what it does.>
//	Copyright (C) 2018. WenJin Yu. windpenguin@gmail.com.
//
//	Created at 2018/7/10 11:37:45
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
#include "ToyFormatOutput.h"
#include <iostream>
#include <iomanip>	// setw, setfill
using namespace std;

namespace wind {

void TestFormatCout()
{
	cout << setw(6) << setfill('0') << "1" << "2" << endl;
}

}