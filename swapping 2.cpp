// swapping values:
#include <iostream>
using namespace std;
int main()
{
	int  a=2 , b=3 , c=4 , d=5 , temp;
		
	temp = a;
	a = d;
	d = c;
	c = b;
	b = temp;
	 
	 cout << "a = " << a <<endl;
	 cout << "b = "	<< b <<endl;
	 cout << "c = " << c <<endl;
	 cout << "d = " << d <<endl;
	 return 0;
	
	
	
}
