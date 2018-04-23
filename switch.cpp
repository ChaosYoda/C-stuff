/*
 * switch.cpp
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
int main(int argc, char **argv)
{
	constexpr double gbp_eur = 1.28;
    constexpr double gbp_yen = 157.78;
    constexpr double eur_yen = 123.42;

	char from {};
	char to {} ; 
	double val1 = 3.6;
	
	to = 'e';
	from = 'y';
	switch (from) {
        case 'p':
			cout << "p fdoun" << endl;
            switch (to) {
                case 'e':
                cout << val1 << " pounds is equivalent to " << (val1 * gbp_eur) << " euros.\n";
                break;
                case 'y':
                cout << val1 << " pounds is equivalent to " << (val1 * gbp_yen) << " yen.\n";
                break;
            };
            break;
        case 'e':
            switch (to) {
                case 'p':
                cout << val1 << " euros is equivalent to " << (val1 / gbp_eur) << " pounds.\n";
                break;
                case 'y':
                cout << val1 << " euros is equivalent to " << (val1 * eur_yen) << " yen.\n";
                break;
            };
            break;
        case 'y':
            switch (to) {
                case 'p':
                cout << val1 << " yen is equivalent to " << (val1 / gbp_yen) << " pounds.\n";
                break;
                case 'e':
                cout << val1 << " yen is equivalent to " << (val1 / eur_yen) << " euros.\n";
                break;
            };
            break;
         default:
            cout << "I don't recognise your input! :(\n\n";
            break;
    }    
    
}

