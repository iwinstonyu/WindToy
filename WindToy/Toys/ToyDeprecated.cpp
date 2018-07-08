#include "stdafx.h"
#include "ToyDeprecated.h"

//#define TOY_TEST_DEPRECATED
#ifdef TOY_TEST_DEPRECATED

namespace wind {

namespace deprecated1 {

// deprecated.cpp  
// compile with: /W3  
#define MY_TEXT "function is deprecated"  
void func1(void) {}
__declspec(deprecated) void func1(int) {}
__declspec(deprecated("** this is a deprecated function **")) void func2(int) {}
__declspec(deprecated(MY_TEXT)) void func3(int) {}


// deprecate_class.cpp  
// compile with: /W3  
struct __declspec(deprecated) X {
	void f() {}
};

struct __declspec(deprecated("** X2 is deprecated **")) X2 {
	void f() {}
};

void AboutDeprecated() {
	func1();
	func1(1);   // C4996  
	func2(1);   // C4996  
	func3(1);   // C4996  

	X x;		// C4996  
	X2 x2;		// C4996  
}

} // namespace deprecated1


namespace deprecated2 {

// C4995.cpp
// compile with: /W3

// #pragma warning(disable : 4995)
void func1(void)
{
	printf("\nIn func1");
}

void func2(void) {
}

#pragma deprecated(X)  
class X {  // C4995  
public:
	void f() {}
};

void AboutDeprecated()
{
	func1();
#pragma deprecated(func1, func2)
	func1();	// C4995
	func2();	// C4995 

	X x;
}

} // namespace deprecated2 

}

#endif