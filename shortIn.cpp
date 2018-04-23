/*
 * shortIn.cpp
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
#include <limits.h>

using namespace std;

int add(int a, int b)
{
	cout << "int used" << endl;
	return a+b;
}

float add(float a, float b)
{
	cout << "float used" << endl;
	return a + b;
}





int main(int argc, char **argv)
{
	
	const int length = 10 ; 
	int arr[length] = {0};
	
	for (short int i = 0 ; i < length ; i++)
	{
		
		std::cout << arr[i] <<std::endl ;
	}
	
	int arr2[2][3] = {{9}};
	
	//arr2[1][2] = 9 ; 
	
	std::cout << "something" <<arr2[1][2] << std::endl;
	
	short int i = 1 ;
	int b = 1; 
	long a = 1; 
	long long c = 1; 
	std::cout << " Size of i  " << sizeof(i) << std::endl; 
	std::cout << " Size of b  int " << sizeof(b) << std::endl; 
	std::cout << " Size of a  long " << sizeof(a) << std::endl; 
	std::cout << " Size of c  " << sizeof(c) << std::endl;
	std::cout << " Size of char  " << sizeof(char) << std::endl;
		std::cout << " Size of float  " << sizeof(float) << std::endl;
	std::cout << " Size of double  " << sizeof(double) << std::endl;
	
	std::cout << "hello" << std::endl;
	std::cerr << "Something" <<std::endl;
	
	std::cout << sizeof(size_t) << std::endl;
	
	cout << add (3.8 ,4.0f) << endl;
	
	for(int i = 10 ; i > 0 ; i = i >> 1 )
	
	{
		
		cout << i << endl;
	}	
	
	int a3[] = {1,2,3,4,5,6,7};
	
	cout << 1[a3] <<endl;
	
	
	int a2,b2; 
	long x, aps; 
	
	cin >> a2; 
	cin >>b2 ; 
	
	x = a2-b2 ; 
	aps = ((x*x-1)%x)+1;
	
	cout << " x * x "  <<(x*x-1) <<endl;
	cout << (x*x-1) - INT_MAX << endl;
	
	cout << INT_MAX<< endl;
	
	cout << " Long max " <<  LONG_MAX << endl;
	//2147483647
	
	
	cout << "aps " << aps << endl;
	cout << "the larger number is : " << ((a2+b2+aps)/2) << endl;
	cout << "the smaller number is : " << (a2+b2)-((a2+b2+aps)/2) <<endl;
	
	
	
	return 0;
}

