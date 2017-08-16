//
//	<one line to give the program's name and a brief idea of what it does.>
//	Copyright (C) 2017. WenJin Yu. windpenguin@gmail.com.
//
//	Created at 2017/8/16 11:24:45
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

#include "stdafx.h"

#include <iostream>
#include "ToyEnum.h"

using std::cout;
using std::endl;

namespace wind {

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

} // namespace wind

