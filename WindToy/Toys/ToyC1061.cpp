//	A simple demo to display: fatal error C1061: compiler limit : blocks nested too deeply
//	Copyright (C) 2016.  WenJin Yu. windpenguin@gmail.com.
	
//	This program is free software: you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation, either version 3 of the License, or
//	(at your option) any later version.
	
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU General Public License for more details.
	
//	You should have received a copy of the GNU General Public License
//	along with this program.  If not, see <http://www.gnu.org/licenses/>.


#include "stdafx.h"
#include <iostream>

#include "ToyC1061.h"

using std::cout;
using std::endl;

namespace wind {

void TestC1061() {
	//C1061Demo1();
	//C1061Demo2();

	//for( int i = 0; i < 1000; ++i )
	//	C1061Demo3( i );

	//C1061Demo4();

	C1061Demo5();
}

/*
void C1061Demo1()
{
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
	for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl;
}
*/
/*
void C1061Demo2()
{
	int i = 0;
	if( i = 1 ){ cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
	else if ( i == 2 ) { cout << i << endl; }
}
*/

void C1061Demo3( int i )
{
	switch( i )
	{
	case 0: { cout << i << endl; } break;
	case 1: { cout << i << endl; } break;
	case 2: { cout << i << endl; } break;
	case 3: { cout << i << endl; } break;
	case 4: { cout << i << endl; } break;
	case 5: { cout << i << endl; } break;
	case 6: { cout << i << endl; } break;
	case 7: { cout << i << endl; } break;
	case 8: { cout << i << endl; } break;
	case 9: { cout << i << endl; } break;
	case 10: { cout << i << endl; } break;
	case 11: { cout << i << endl; } break;
	case 12: { cout << i << endl; } break;
	case 13: { cout << i << endl; } break;
	case 14: { cout << i << endl; } break;
	case 15: { cout << i << endl; } break;
	case 16: { cout << i << endl; } break;
	case 17: { cout << i << endl; } break;
	case 18: { cout << i << endl; } break;
	case 19: { cout << i << endl; } break;
	case 20: { cout << i << endl; } break;
	case 21: { cout << i << endl; } break;
	case 22: { cout << i << endl; } break;
	case 23: { cout << i << endl; } break;
	case 24: { cout << i << endl; } break;
	case 25: { cout << i << endl; } break;
	case 26: { cout << i << endl; } break;
	case 27: { cout << i << endl; } break;
	case 28: { cout << i << endl; } break;
	case 29: { cout << i << endl; } break;
	case 30: { cout << i << endl; } break;
	case 31: { cout << i << endl; } break;
	case 32: { cout << i << endl; } break;
	case 33: { cout << i << endl; } break;
	case 34: { cout << i << endl; } break;
	case 35: { cout << i << endl; } break;
	case 36: { cout << i << endl; } break;
	case 37: { cout << i << endl; } break;
	case 38: { cout << i << endl; } break;
	case 39: { cout << i << endl; } break;
	case 40: { cout << i << endl; } break;
	case 41: { cout << i << endl; } break;
	case 42: { cout << i << endl; } break;
	case 43: { cout << i << endl; } break;
	case 44: { cout << i << endl; } break;
	case 45: { cout << i << endl; } break;
	case 46: { cout << i << endl; } break;
	case 47: { cout << i << endl; } break;
	case 48: { cout << i << endl; } break;
	case 49: { cout << i << endl; } break;
	case 50: { cout << i << endl; } break;
	case 51: { cout << i << endl; } break;
	case 52: { cout << i << endl; } break;
	case 53: { cout << i << endl; } break;
	case 54: { cout << i << endl; } break;
	case 55: { cout << i << endl; } break;
	case 56: { cout << i << endl; } break;
	case 57: { cout << i << endl; } break;
	case 58: { cout << i << endl; } break;
	case 59: { cout << i << endl; } break;
	case 60: { cout << i << endl; } break;
	case 61: { cout << i << endl; } break;
	case 62: { cout << i << endl; } break;
	case 63: { cout << i << endl; } break;
	case 64: { cout << i << endl; } break;
	case 65: { cout << i << endl; } break;
	case 66: { cout << i << endl; } break;
	case 67: { cout << i << endl; } break;
	case 68: { cout << i << endl; } break;
	case 69: { cout << i << endl; } break;
	case 70: { cout << i << endl; } break;
	case 71: { cout << i << endl; } break;
	case 72: { cout << i << endl; } break;
	case 73: { cout << i << endl; } break;
	case 74: { cout << i << endl; } break;
	case 75: { cout << i << endl; } break;
	case 76: { cout << i << endl; } break;
	case 77: { cout << i << endl; } break;
	case 78: { cout << i << endl; } break;
	case 79: { cout << i << endl; } break;
	case 80: { cout << i << endl; } break;
	case 81: { cout << i << endl; } break;
	case 82: { cout << i << endl; } break;
	case 83: { cout << i << endl; } break;
	case 84: { cout << i << endl; } break;
	case 85: { cout << i << endl; } break;
	case 86: { cout << i << endl; } break;
	case 87: { cout << i << endl; } break;
	case 88: { cout << i << endl; } break;
	case 89: { cout << i << endl; } break;
	case 90: { cout << i << endl; } break;
	case 91: { cout << i << endl; } break;
	case 92: { cout << i << endl; } break;
	case 93: { cout << i << endl; } break;
	case 94: { cout << i << endl; } break;
	case 95: { cout << i << endl; } break;
	case 96: { cout << i << endl; } break;
	case 97: { cout << i << endl; } break;
	case 98: { cout << i << endl; } break;
	case 99: { cout << i << endl; } break;
	case 100: { cout << i << endl; } break;
	case 101: { cout << i << endl; } break;
	case 102: { cout << i << endl; } break;
	case 103: { cout << i << endl; } break;
	case 104: { cout << i << endl; } break;
	case 105: { cout << i << endl; } break;
	case 106: { cout << i << endl; } break;
	case 107: { cout << i << endl; } break;
	case 108: { cout << i << endl; } break;
	case 109: { cout << i << endl; } break;
	case 110: { cout << i << endl; } break;
	case 111: { cout << i << endl; } break;
	case 112: { cout << i << endl; } break;
	case 113: { cout << i << endl; } break;
	case 114: { cout << i << endl; } break;
	case 115: { cout << i << endl; } break;
	case 116: { cout << i << endl; } break;
	case 117: { cout << i << endl; } break;
	case 118: { cout << i << endl; } break;
	case 119: { cout << i << endl; } break;
	case 120: { cout << i << endl; } break;
	case 121: { cout << i << endl; } break;
	case 122: { cout << i << endl; } break;
	case 123: { cout << i << endl; } break;
	case 124: { cout << i << endl; } break;
	case 125: { cout << i << endl; } break;
	case 126: { cout << i << endl; } break;
	case 127: { cout << i << endl; } break;
	case 128: { cout << i << endl; } break;
	case 129: { cout << i << endl; } break;
	case 130: { cout << i << endl; } break;
	case 131: { cout << i << endl; } break;
	case 132: { cout << i << endl; } break;
	case 133: { cout << i << endl; } break;
	case 134: { cout << i << endl; } break;
	case 135: { cout << i << endl; } break;
	case 136: { cout << i << endl; } break;
	case 137: { cout << i << endl; } break;
	case 138: { cout << i << endl; } break;
	case 139: { cout << i << endl; } break;
	case 140: { cout << i << endl; } break;
	case 141: { cout << i << endl; } break;
	case 142: { cout << i << endl; } break;
	default: { cout << "unknown" << endl; } break;
	}
}

//void C1061Demo4()
//{
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//	for( int i = 0; i < 10; ++i) cout << i << " ";
//}

void C1061Demo5()
{
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
	{ for( int i = 0; i < 10; ++i) { cout << i << " "; } cout << endl; }
}

} // namespace wind