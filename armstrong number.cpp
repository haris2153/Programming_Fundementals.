// amstrong number(1 to 4)
#include<iostream>
using namespace std;
int main()
{
	int num;
	int first;
	int middle;
	int last;
	int sum;
	
	cout <<"Enter a number"<<endl;
	cin  >> num;
	
	if(num >=1 && num <= 9)
	{
		cout <<"Amsstrong number."<<endl;
	}
	else
	{
		if(num >=10 && num <= 99)
		{
		
			int last  = num % 10;
			int first = num / 10;
			int sum = (first * first) + (last * last);
			
			if(sum == num)
			{
			cout <<" Number is amstrong " <<endl;
			}
			else
			{
				cout<<"not an amstrong number"<<endl;
			}
		
		}
		else
		{
			if(num >=100  && num <= 999)
			{
				
				int last = num % 10;
				int middle = (num / 10) % 10;
				int first = num / 100;
				int sum = (first*first*first) + (middle*middle*middle) + (last * last * last);
			
				if(sum == num)
				{
					cout <<"Amstrong number."<<endl;
				}
				else
				{
					cout <<"not an amstrong number"<<endl;
				}
			}
			else
			{
				if(num >= 1000 && num <= 9999)
				{
					int ones = num % 10;
					int tens = (num / 10) % 10;
					int h =(num / 100) % 10;
					int th = num / 1000;
					int sum = (ones*ones*ones*ones) + (tens*tens * tens * tens) + (h*h*h*h) +(th*th*th*th);
					if(sum == num)
					{
						cout <<"Amstrong number" <<endl;
					}
					else
					{
						cout <<"not an amstrong number"<<endl;
					}
				}
				else
				{
					cout <<"invalid input" <<endl;
				}
			}
		}
	}
	return 0;
}
