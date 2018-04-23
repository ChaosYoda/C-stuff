/*
 * pointers.cxx
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

using namespace std;

class Foo{
	public:
		int something; 
	
};

void changeFoo(Foo f)
{
	f.something = 600;
}

void changeFooRealy(Foo *f)
{
	f->something = 600; 
}



int main(int argc, char **argv)
{
	Foo foo; 
	
	foo.something = 34;
	
	changeFoo(foo);
	
	cout << foo.something << endl;


	Foo *foo2 = new Foo();
	foo2->something = 30;
	changeFooRealy(foo2);
	cout << foo2->something << endl;
	
	
	return 0;
}

