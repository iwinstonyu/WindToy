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

#include <Windows.h>

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

// 一个字符串如果太长，可以分成多行来写，在每行的结尾加'\'表示换行，'\'后面不能再跟任何内容，要另起一行书写。
void TooLongString();

// 构造一个临时对象，临时对象销毁的时候调用析构函数，输出流的内容
void TestAnoyClass();

// 匿名函数没有返回值可以不写void
void FuncVoidReturn();

BOOL WINAPI ConsoleHandler(DWORD ctrlType);

void TestFormatCout();

void TestMessageBox();

// 全局变量map直接初始化
void TestGlobalMapInit();

extern "C" {
	int foo();
	static int bar();
}

} // namespace wind