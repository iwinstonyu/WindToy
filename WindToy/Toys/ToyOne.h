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

} // namespace wind