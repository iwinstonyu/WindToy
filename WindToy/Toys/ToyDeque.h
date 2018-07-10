//
//	<one line to give the program's name and a brief idea of what it does.>
//	Copyright (C) 2018. WenJin Yu. windpenguin@gmail.com.
//
//	Created at 2018/7/9 14:49:15
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

#include <iostream>
using namespace std;

namespace wind {

struct MyNum
{
	MyNum(int num) : num_(num) {}

	bool operator>(const MyNum& rhs) const {
		return num_ > rhs.num_;
	}

	std::ostream& operator<<(std::ostream& stream)const {
		stream << num_;
		return stream;
	}

	int num_;
};


/// @brief 通常deque是升序排序，可以直接用upper_bound查找并插入元素。
///		   如果deque是降序排序，那么使用upper_bound查找并插入元素的时候，需要传入greater作为比较函数
void DequeInGreaterOrder();

}