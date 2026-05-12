#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	int j = 1;
	
	cout << "Please enter a number:" << endl;
	cin  >> i;
	
	while(j <= 10)
	{
		cout << i << " * " << j << " = " << i * j << endl;
		j++;
	}
	return 0;
}
