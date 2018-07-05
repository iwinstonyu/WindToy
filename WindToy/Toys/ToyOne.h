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

void AboutDoubleQuotes();

void BindAndValueType();

void AboutScope();

// ֻ��Ϊ�˴�ӡ�꣬ͨ����Ŀ����->C/C++->Ԥ������->Ԥ�����ļ����������Կ���Ԥ������ļ�xx.i��
// ���Կ������Ѿ����滻�ɾ����ֵ��
// ����ToyOne.cpp��ʱ��Ҫ��#include "stdafx.h"ע�͵�
void PrintNonsenseNum();

// һ���ַ������̫�������Էֳɶ�����д����ÿ�еĽ�β��'\'��ʾ���У�'\'���治���ٸ��κ����ݣ�Ҫ����һ����д��
void TooLongString();

// ����һ����ʱ������ʱ�������ٵ�ʱ��������������������������
void TestAnoyClass();

// ��������û�з���ֵ���Բ�дvoid
void FuncVoidReturn();

BOOL WINAPI ConsoleHandler(DWORD ctrlType);

void TestFormatCout();

void TestMessageBox();

// ȫ�ֱ���mapֱ�ӳ�ʼ��
void TestGlobalMapInit();

extern "C" {
	int foo();
	static int bar();
}

//// deprecated.cpp  
//// compile with: /W3  
//#define MY_TEXT "function is deprecated"  
//void func1(void) {}
//__declspec(deprecated) void func1(int) {}
//__declspec(deprecated("** this is a deprecated function **")) void func2(int) {}
//__declspec(deprecated(MY_TEXT)) void func3(int) {}
//
//int HelloDeprecated() {
//	func1();
//	func1(1);   // C4996  
//	func2(1);   // C4996  
//	func3(1);   // C4996  
//}

void func1(void) {
}

void func1(int) {

}

void func2(void) {
}

__declspec(deprecated("Warning: ����ӿڲ���ʹ��"))	\
void func3(void) {
}

int HelloDeprecated() {
//	func1();
//	func2();
//#pragma deprecated(func1, func2)
//	func1(1);
//	func1();   // C4995
//	func2();   // C4995
	func3();
}

} // namespace wind