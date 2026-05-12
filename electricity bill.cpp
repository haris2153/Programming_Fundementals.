#include<iostream>
using namespace std;
int main()
{
	int units,bill ,meter_charge = 50 ;
	
	cout << "Enter your units:" << endl;
	cin  >> units;
	
	if (units > 100)
	{	
		
			if (units <= 200)
			{
				bill = meter_charge + (100 * 5) + ((units - 100) * 7);
				cout << "Bill = " << bill << " Rs" << endl;
			}
			else
			{
				bill = meter_charge + (100 * 5) + (100 * 7) + ((units - 200) * 10);
				cout << "Bill = " << bill << " Rs" << endl;
			}
	
	
	}
	else
	{
		bill = meter_charge + (units * 5);
		cout <<  bill;
	}
	
	return 0; 
}
/*#include<iostream>
using namespace std;
int main()
{
	int units, bill, meter_charge = 50;
	
	cout << "Enter your units:" << endl;
	cin >> units;
	
	if (units > 100)
	{	
		
	}
	else
	{
		bill = meter_charge + (units * 5);
		cout << "Bill = " << bill << " Rs" << endl;
	}
	
	return 0;
}*/
