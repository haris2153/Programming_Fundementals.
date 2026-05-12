#include <iostream>
using namespace std;
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int temp;
	
	temp = a;
	a = b;
	b = c;
	c = temp;
	
	cout << "a = " << a <<endl;
	cout << "b = " << b <<endl;
	cout << "c = " << c <<endl;
	
	return 0;
}
