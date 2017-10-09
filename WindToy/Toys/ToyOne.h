//
//	<one line to give the program's name and a brief idea of what it does.>
//	Copyright (C) 2017. WenJin Yu. windpenguin@gmail.com.
//
//	Created at 2017/8/14 17:21:17
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

namespace wind {

#define NONSENSE_NUM 10

void WhatAboutDoubleQuotes();

void BindAndValueType();

void WhatAboutWriteFile();

void AboutScope();

// 只是为了打印宏，通过项目属性->C/C++->预处理器->预处理到文件，编译后可以看到预处理的文件xx.i。
// 可以看到宏已经被替换成具体的值。
// 编译ToyOne.cpp的时候还要把#include "stdafx.h"注释掉
void PrintNonsenseNum();

void TooLongString();

} // namespace wind