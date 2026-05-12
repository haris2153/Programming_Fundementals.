#include<iostream>
using namespace std;
int main()
{
	int a = 0 , b = 0 , c;
	cout <<"Enter first side:"<<endl;
	cin  >> a;
	
	cout << "Enter second side:"<<endl;
	cin  >> b;
	
	cout << "Enter third side:"<<endl;
	cin  >> c;

	if(a == b && b == c)
	{
	cout << "Equilateral triangle."<<endl;	
		
	}
	else
	{
		if(a == b || b == c)
		{
			cout<<"Isocelese Triangle."<<endl;
		}
		else
		{	
			if(a != b && b != c)
			{
				cout << "Scalene Triangle."<<endl;
			}
			else
			{
				cout <<"Invalid."<<endl;
			}
		}
	
	}
	return 0;	
}
