#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	
	cout << "Enter first number:"<<endl;
	cin  >> a;
	
	cout << "Enter second number:"<<endl;
	cin  >> b;
	
	cout << "Enter third number:"<<endl;
	cin  >> c;
	
	if(a > b)
	{
		if(a < c)
		{
			cout << "a is the middle."<<endl;
		}
		else
		{
			if(b < c)
			{
				cout << "b is the middle number."<<endl;
			}
			else
			{
				cout << "c is the middle number."<<endl;
			}
			
		}
	}
	else
	{
		
		if(a > c)
		{
			cout <<"a is the middle"<<endl;
		}
		else
		{
			if(b < c)
			{
				cout << "b is the middle"<<endl;
			}
			else
			{
				cout << "c is the middle."<<endl;
			}
		}
		
	}			
	return 0;
}
