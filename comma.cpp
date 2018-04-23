#include <iostream>

using namespace std;


void comma(int n)
{
	if(n<1000)
	{
		cout<<n;
	}
	else
	{
		comma(n/1000);cout<<","<<n%1000;
	}
}

int main ()
{

	comma(1234567);

}
