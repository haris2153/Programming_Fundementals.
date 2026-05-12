#include<iostream>
using namespace std;
int main()
{
	int num;
	
	cout <<"Enter a Number:" << endl;
	cin  >> num;

	
		
		if(num % 2 == 0)
		{	
			if(num % 3 == 0)
			{	
				if(num % 2 != 0 && num % 3 != 0)
				{
					cout << "Number is not divisible by 2 and 3."<<endl;
				}
				else
				{
					cout <<"Number is  divisible by both 2 and 3." <<endl;
				}
			}
			else
			{
				cout << "Number is divisible is 2 omly."<<endl;
			}
		}
		else
		{
			cout << "Number is divisible by 3 only"<<endl;
		}
	


		
	return 0;
}
