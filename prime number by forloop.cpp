#include<iostream>
using namespace std;
int main()
{
	int num ,p=1;
	cout << "Please enter a number: " << endl;
	cin  >> num;
	
	if(num <= 1)
	{
		cout <<"Number is not prime." << endl;
	}
	else
	{
	for(int c = 2;c <= num/2 ;c++)
	{	
		if(num % c == 0)
		{
		 p = 0;
		 break;
		}
	}
	if(p == 1)
	{
		cout << "number is Prime."<< endl;
	}
	else
	{
		cout << "Number is composite." << endl;
	}
	}
	return 0;
	
}
