#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int fact = 1, count = 1 , num = 0;
	
	cout << "Please enter a number:" << endl;
	cin  >> num;
	
	while(count <= num)
	{
		fact = fact * count;
		count++;
	
	}
		cout << "Factorial = " << fact << endl; 
	return 0;
}
