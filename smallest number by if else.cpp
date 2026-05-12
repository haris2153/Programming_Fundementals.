//Find the Largest and Smallest of Three Numbers
#include<iostream>
using namespace std;
int mian()
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
	
	return 0;
}
