#include "stdafx.h"

#include <iostream>
#include <stddef.h>
#include "ToyPragmaPack.h"
using namespace std;

namespace wind {

void AboutPragmaPack()
{
	cout << "=======================" << __FUNCTION__ << "=======================" << endl;
	struct B b;
	cout << sizeof(B) << endl;
	cout << &b << endl;
	cout << static_cast<void*>(&b.a) << endl;
	cout << &b.b << endl;
	cout << &b.c << endl;
	cout << &b.d << endl;

	cout << endl;

	struct C c;
	cout << sizeof(c) << endl;
	cout << &c << endl;
	cout << static_cast<void*>(&c.a) << endl;
	cout << &c.b << endl;
	cout << &c.c << endl;

	cout << endl;

	cout << "offsetof(D, a): " << offsetof(D, a) << endl;
	cout << "offsetof(D, b): " << offsetof(D, b) << endl;
	cout << "sizeof(D): " << sizeof(D) << endl;
	
	cout << endl;
	
	cout << "offsetof(E, a): " << offsetof(E, a) << endl;
	cout << "offsetof(E, d): " << offsetof(E, d) << endl;
	cout << "offsetof(E, c): " << offsetof(E, c) << endl;
	cout << "sizeof(E): " << sizeof(E) << endl;
	cout << "=======================" << __FUNCTION__ << "=======================" << endl;
}

}