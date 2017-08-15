// WindToy.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>

using namespace std;

void TestDataTypeLen()
{
	cout << "TestDataTypeLen============================================" << endl;

	cout << "char: " << sizeof(char) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << endl;
	cout << "unsigned long: " << sizeof(unsigned long) << endl;
	cout << "long long: " << sizeof(long long) << endl;
	cout << "unsigned long long: " << sizeof(unsigned long long) << endl;
	cout << "wchar_t: " << sizeof(wchar_t) << endl;
	cout << "char *: " << sizeof(char *) << endl;

	cout << "TestDataTypeLen============================================" << endl << endl;
}

namespace CardGame_Scoped
{
	enum class Suit { Diamonds, Hearts, Clubs, Spades };

	void PlayCard(Suit suit)
	{
		if (suit == Suit::Clubs) // Enumerator must be qualified by enum type  
		{ /*...*/
		}
	}
}

namespace CardGame_NonScoped
{
	enum Suit { Diamonds, Hearts, Clubs, Spades };

	void PlayCard(Suit suit)
	{
		if (suit == Clubs) // Enumerator is visible without qualification  
		{ /*...*/
		}
	}
}

void TestEnum()
{
	enum Suit { Diamonds = 5, Hearts, Clubs = 4, Spades };

	cout << "Diamonds: " << Diamonds << endl;
	cout << "Hearts: " << Hearts << endl;
	cout << "Clubs: " << Clubs << endl;
	cout << "Spades: " << Spades << endl;
}

int main()
{
	TestDataTypeLen();

	TestEnum();

	system("pause");
    return 0;
}

