// ATM PROGRAM USING C++.
#include<iostream>
using namespace std;
int main()
{
	int pin = 2424; //bank passward or code.
	int ch;  		//choice.
	int balance = 7000; //amount in the account.
	int amount = 0;
	
	cout <<"------ *WELCOME TO XYZ BANK* ------ "<<endl;
	cout << endl;
	cout << "Enter your pin (XXXX) to verify:"<<endl;
	cin  >> pin;
	
	if(pin == 2424)
	{	
		cout << "1.)Check Balance"<<endl<<"2.)withdrawl amount\n3.)deposit amount "<<endl;
		cout << endl;
		
		cout << "Enter your choice:"<< endl;
		cin  >> ch;
		cout << endl;
		
		if(ch == 1)
			{
				cout << "BALANCE= "<< balance << "Rs" << endl;
			}
		else
			{
				if(ch == 2)
				{
					cout << "Withdrwawl ammount:"<< endl;
					cin  >> amount;
					
					if(amount <= balance)
					{
						balance  -= amount;
						cout << "Balance after withdraw=" << balance << "Rs" << endl;
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
							
						cout << "Deposit amount:"<< endl;
						cin  >> amount;
						balance = balance + amount;
						cout << "Balamce after deposit amount= "<< balance << "Rs" << endl;	
					}
					else
					{
						cout <<"IN-VALID CHOICE" << endl;	
					}	
				}
			}	
	}
	else
	{
		cout << "Incorrect PIN XXXX "<< endl;
	}
	return 0;
}
