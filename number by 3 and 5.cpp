/*Input a number and check:
“Divisible by both 3 and 5”         //INCORRECT
“Divisible by 3 only”
“Divisible by 5 only”
“Not divisible by 3 or 5”*/
#include<iostream>
using namespace std;
int main()
{
	int num = 0;
	
	cout << "Please enter a number:" << endl;
	cin  >>  num;
	
	if(num % 5 != 0)
	{
		cout << "Number is divisible by  3" << endl;
	}
	else
	{
	
		
		if(num % 3 != 0)
		{
			cout << "Number is divisible by 5 only." << endl;
		}
		else
		{
		
			if(num % 5 == 0)
			{
				cout << "Number is divisible by  5." << endl;
			}
			else
			{
				if(num % 3 == 0)
				{
			
					cout << " divisible by 3 and 5." << endl;
	    		}
				else
				{
			
					cout <<"not diviseible by 3 and 5";
				}	
			}		
		}	
	}
	return 0;			
}
