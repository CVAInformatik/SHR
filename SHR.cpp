/*
Copyright  � 2024 Claus Vind-Andreasen

This program is free software; you can redistribute it and /or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.
This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with this program; if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 - 1307 USA
This General Public License does not permit incorporating your program into proprietary programs.If your program is a subroutine library, you may consider it more useful to permit linking proprietary applications with the library.
If this is what you want to do, use the GNU Library General Public License instead of this License.

*/
#include <iostream>
#include "SHR.h"

void testSHR(uint tap)
{
	SHR  shr(tap, 1);
	for (int b = 0; b < 80; b++)
	{
		for (int c = 0; c < 80; c++)
			if (shr.GetNextBit())
				std::cout << "1";
			else
				std::cout << "0";
		std::cout << std::endl;
	}

}


int main()
{
	testSHR(0xE10000);// period 16,777,215

	std::cout << std::endl;
}

