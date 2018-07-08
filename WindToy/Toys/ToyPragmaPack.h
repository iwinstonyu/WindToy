#pragma once

namespace wind {

#pragma pack(show)
#pragma pack(push)
#pragma pack(8)
#pragma pack(show)
struct A {
	char a;     // 1
	double b; // 8
};

struct B {
	char a;
	int b;
	int c;
	double d;
};

struct C {
	char a;
	short b;
	short c;
};

#pragma pack(1)
#pragma pack(show)
struct D {
	short a;
	int b;
	char c;
};

#pragma pack(2)
#pragma pack(show)
struct E {
	char a;
	D d;
	short c;
};
#pragma pack(pop)
#pragma pack(show)

void AboutPragmaPack();

}