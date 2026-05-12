#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	
	cout <<"Enter first number"<<endl;
	cin  >> a;
	
	cout <<"Enter second number"<<endl;
	cin  >> b;
	
	cout <<"Enter third number"<<endl;
	cin  >> c;
	
	if(a > b && b > c)
	{	
		cout <<"a is the largest"<<endl;	
	}
	else
	{
		if(c > b && b > a)
		{
			cout << " c is the largest"<<endl;
		}
		else
		{
			cout << "b is the largest" <<endl;
		}
	}
	
		if(a > b && b > c)
		{
			cout << "c is the smallest"<<endl;
		}
		else
		{
			if(c > b && b > a)
			{
				cout << "a is the smallest "<<endl;
			}
			else
			{
				cout << "b is the smallest"<<endl;
			}
		}	
	
	return 0;
}
