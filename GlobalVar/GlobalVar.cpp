// GlobalVar.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include "One.h"
#include "Two.h"
#include "Three.h"
using namespace std;

// 在头文件中定义int b = 10，在被包含到多个文件后，会导致重复编译的错误

// 在头文件中定义const int b = 10，即使被包含到多个文件也会编译成功，但是这相当于每个文件都定义了一个文件作用域的常量，
// 测试可以看出同一个常量在不同文件中的地址不同。构造函数也分别构造，调用多次。

// 在头文件中定义static int c = 10，即使被包含到多个文件也会编译成功，这与const int b = 10 类似，相当于每个文件都定义了变量c。

// 在One.h中使用extern声明extern int a; extern const int h; 然后在Two.cpp中定义int a = 10; 在One.cpp中定义const int h = 10;
// 都可以编译通过，并且在一个程序中只会有一份数据。这才是理想的全局变量的定义方法。

// 如果变量只在单个.cpp文件中使用，那么应该直接在该.cpp文件中定义，不需要在.h文件中声明

int main()
{
// 	TCHAR sz[1024] = _T("");
// 	memcpy(sz, _T("hello"), 1024);

	PrintOne();
	PrintTwo();

	system("pause");
    return 0;
}

