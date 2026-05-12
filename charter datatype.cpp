#include<iostream>
using namespace std;
int main()
{
	char h = 'H';
	char e = 'E';
	char l1= 'L';
	char l2= 'L';
	char o = 'O';
	char x =  32; //32 is the ASCI code for space.
	char l3=   2;
	
	h = h + 2;	
	e = e + 2;
	l1= l1+ 2;
	l2= l2+ 2;
	o = o - 3;
	x = 32;
	cout << x << h << x << e << x << l1 << x << l2 << x<< o ;
	
	return 0;
}
