// swapping values.
#include<iostream>
using namespace std;
int main()
{
	int a , b , x;
// x is a temporary variable.
	a = 5;
	b = 8;
	
	x = a;
	a = b;
	b = x;
	
	cout <<"a = "<< a <<endl;
	cout <<"b = "<< b <<endl;
	
	return 0;		
 } 
