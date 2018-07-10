//
//	<one line to give the program's name and a brief idea of what it does.>
//	Copyright (C) 2018. WenJin Yu. windpenguin@gmail.com.
//
//	Created at 2018/7/9 14:49:27
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
#include "ToyDeque.h"
#include <deque>
#include <algorithm>	// upper_bound
#include <functional>	// greater
#include <iterator>

namespace wind {

void PrintNums(deque<MyNum>& nums)
{
	cout << "nums: ";
	for_each(nums.begin(), nums.end(), [](MyNum& myNum)->void {
		cout << myNum.num_ << " ";
	});
	cout << endl;
}

void InsertNum(deque<MyNum>& nums, int num)
{
	cout << "Insert num: " << num << endl;
	auto it = upper_bound(nums.begin(), nums.end(), num, greater<MyNum>());
	if (it != nums.end())
		nums.insert(it, num);
}

void DequeInGreaterOrder()
{
	PRINT_FUNCTION_BEG;

	deque<MyNum> nums;
	nums.push_back(60);
	nums.push_back(50);
	nums.push_back(40);
	nums.push_back(30);
	nums.push_back(20);
	nums.push_back(10);
	PrintNums(nums);

	InsertNum(nums, 30);
	PrintNums(nums);

	InsertNum(nums, 29);
	PrintNums(nums);

	PRINT_FUNCTION_END;
}

}