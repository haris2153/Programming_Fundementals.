//Find the Largest of Three Numbers
#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0 , c = 0;
	cout <<"Enter first number:" << endl;
	cin  >> a;
	
	cout <<"Enter second number:" << endl;
	cin  >> b;
	
	cout <<"Enter third number:" << endl;
	cin  >> c;
	
	if(b > a)
	{	
		if(a > c)
		{	
			if(b > c)
			{	
				if(c > a)
				{	
					if(a > b)
					{	
						if(c > b)
							{
								if(a > b)
									{
										cout <<"a is greatest"<<endl;
									}
									else
									{
										cout << "b is largest"<<endl;
									}
							}
						else
							{
								cout << "b is largest." <<endl;
							}	
					}
					else
					{
						cout << "b is largest."<<endl;
					}
					
				}
				else
				{
					cout << "b is the largest."<<endl;
				}
			}
			else
			{
				cout << "c is largest."<<endl;
			}
		}
		else
		{
			cout << "c is largset." <<endl;
		}
	}
	else
	{
		cout << "a is largest number."<<endl;
	}
	return 0;	
}
