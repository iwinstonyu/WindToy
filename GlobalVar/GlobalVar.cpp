// GlobalVar.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <iostream>
#include "One.h"
#include "Two.h"
#include "Three.h"
using namespace std;

// ��ͷ�ļ��ж���int b = 10���ڱ�����������ļ��󣬻ᵼ���ظ�����Ĵ���

// ��ͷ�ļ��ж���const int b = 10����ʹ������������ļ�Ҳ�����ɹ����������൱��ÿ���ļ���������һ���ļ�������ĳ�����
// ���Կ��Կ���ͬһ�������ڲ�ͬ�ļ��еĵ�ַ��ͬ�����캯��Ҳ�ֱ��죬���ö�Ρ�

// ��ͷ�ļ��ж���static int c = 10����ʹ������������ļ�Ҳ�����ɹ�������const int b = 10 ���ƣ��൱��ÿ���ļ��������˱���c��

// ��One.h��ʹ��extern����extern int a; extern const int h; Ȼ����Two.cpp�ж���int a = 10; ��One.cpp�ж���const int h = 10;
// �����Ա���ͨ����������һ��������ֻ����һ�����ݡ�����������ȫ�ֱ����Ķ��巽����

// �������ֻ�ڵ���.cpp�ļ���ʹ�ã���ôӦ��ֱ���ڸ�.cpp�ļ��ж��壬����Ҫ��.h�ļ�������

int main()
{
// 	TCHAR sz[1024] = _T("");
// 	memcpy(sz, _T("hello"), 1024);

	PrintOne();
	PrintTwo();

	system("pause");
    return 0;
}

