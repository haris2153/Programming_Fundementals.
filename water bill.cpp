#include<iostream>
#include<cmath>  //addioinal.
#include<iomanip> // addional.
using namespace std;
int main()
{
	float  unpaid_balance , bill,current, previous, total;
	float demand_charge = 350,  surcharge = 50, consumption ;
	
	cout << "Enter unpaid balance:" << endl;
	cin  >>  unpaid_balance;
	
	cout << "Enter current bill (gallons): " << endl;
	cin  >> current;
	
	cout <<"Enter previous bill (gallons): " << endl;
	cin  >> previous;
	
	consumption = current - previous;
	
	bill =	demand_charge + (consumption / 1000) * 100;
	
	if(unpaid_balance > 0)
	{
	
	 total = bill + surcharge + unpaid_balance ;
	
		cout << "Total water bill is: " << total << endl;
	}
	  
	else
    {
	    total = bill + unpaid_balance;
        cout << "Total water bill is: " << total << endl;
    
	}	
		cout << "---------WATER BILL---------" << endl;
		cout << "UNPAID BALANCE = " << unpaid_balance <<" Rs" << endl;
		cout << "Current meter reading = " << current << " gallons" << endl;
		cout << "Previous meter reading = "<< previous << " gallons" << endl;
		cout << "TOTAL BILL = " << total << " Rs" << endl;
	
	return 0;
}
