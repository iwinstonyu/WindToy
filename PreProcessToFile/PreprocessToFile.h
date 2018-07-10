//
//	<one line to give the program's name and a brief idea of what it does.>
//	Copyright (C) 2018. WenJin Yu. windpenguin@gmail.com.
//
//	Created at 2018/7/10 10:44:12
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

namespace wind {

/// @brief 查看预处理文件。
///	@details 通过项目属性->C/C++->预处理器->预处理到文件，编译后可以看到预处理的文件xx.i。	   
///			 可以看到宏已经被替换成具体的值。
///			 如果只想查看某个文件预处理后的结果，只编译该文件即可。
///			 由于没有生成obj，生成项目会提示链接失败。
void PrintNonsenseNum();

}