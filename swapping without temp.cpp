#include<iostream>
using namespace std;
int main()
{
	int a = 5;
	int b = 2;
	int c = 1;

	a = a + b + c;
	b = a - (b + c);
	c = a - (b + c);
	a = a - (b + c);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	return 0;
}
