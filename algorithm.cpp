/*
 * algorithm.cpp
 * 
 * Copyright 2016 Unknown <taz@V10>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <ctime>

int main(int argc, char **argv)
{
	
	

	
	int n = 0; 
	std::cin >> n ;
	std::cin.get();
	
	int i =1;
	int j = n;
	
	clock_t begin = clock();
	while(i < n)
	{
		while(j >0)
		{
			j /= 2;
		}
		i++;
		
	}
	
	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	 std::cout << elapsed_secs <<std::endl;
	return 0;
}

