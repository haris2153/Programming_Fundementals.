#include<iostream>
using namespace std;
int main()
{
	int a = 2;
	int b = 3;
	int result;
	
	result = ((a * a ) + ( b * b ) + (2 * a * b)) / (a + b);
	
	cout << "Result is:"<< endl << result;
	
	return 0;
}
