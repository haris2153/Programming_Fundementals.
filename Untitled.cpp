#include<iostream>
using namespace std;
int main()
{
	int pin = 2424;
	int ch;
	int balance = 7000;
	int amount = 0;
	
	cout << "Enter your pin to verify:"<<endl;
	cin  >> pin;
	
	if(pin == 2424)
	{	
		cout <<"1.)Check Balance , 2.)withdrawl amount , 3.)deposit amount "<<endl;
		cout << "Enter your choice:"<<endl;
		cin  >> ch;
		
		if(ch == 1)
			{
				cout <<"BALANCE= "<< balance <<" Rs"<<endl;
			}
		else
			{
				if(ch == 2)
				{
					if(amount <= 7000)
					{
						cout << "Withdrwawl ammount:"<<endl;
						cin  >> amount;
						balance = balance - amount;
						cout << "Balance after withdrawl=" << balance <<" Rs"<<endl;
					}
					else
					{
						cout << "In-Sufficient Balance ! " << endl;
					}
					
				}
				else
				{
					if(ch == 3)
					{
							
						cout << "Deposit amount:"<<endl;
						cin  >> amount;
						balance = balance + amount;
						cout << "Balamce after deposit amount= "<< balance <<" Rs" <<endl;	
					}
					else
					{
						cout <<"IN-VALID CHOICE" <<endl;	
					}	
				}
			}	
	}
	else
	{
		cout << "Incorrect PIN XXXX "<<endl;
	}
	return 0;
}
