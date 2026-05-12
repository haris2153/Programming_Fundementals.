#include<iostream>
using namespace std;
int main()
{
	int num , any_num;
	cout << "Please enter first number:" << endl;
	cin  >> num;
	
	cout << "please enter any number:" << endl;
	cin  >> any_num;
	 
	if(num <= 1 )
	{
		cout << "Number is not prime. " << endl;
	}
	else if(num % any_num == 0)
    {
		cout << "Number is not prime. " << endl;
	}
	else
	{
		cout << "Number is prime." << endl;
	}
	return 0;
}
