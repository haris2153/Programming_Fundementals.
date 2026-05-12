#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Please enter first number:" << endl;
	cin  >> num;
	
	if(num <= 1 )
	{
		cout << "Number is not prime. " << endl;
	}
	else if(num == 2 || num == 3 || num == 5 || num == 7 || num == 11 || num == 13 || num == 17 ||num == 19)
	{
		cout << "Number is prime." << endl;
	}
	else if(num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0 || num % 11 == 0 ||num % 13 == 0 || num % 17 ==0 || num % 19 ==0)
	{
		cout << "Number is not prime." << endl;
	}
	else
	{
		cout << "Number is primer." << endl;
	}
	return 0;
}
