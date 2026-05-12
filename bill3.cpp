#include<iostream>
using namespace std;
int main()
{
	float meal_coast;
	float discount;
	float tax;
	float tip;
	float total;
	float discount_coast;
	
	cout << "      RESTAURNT BILL"<<endl;
	//meal coast.
	meal_coast = 800;
	cout << "Meal coast = " << meal_coast <<" rupees."<<endl;
	//meal coast after discount.
	discount = ( 5 * 800 / 100);
	discount_coast = 800 - discount;
	cout << "Meal coast after discount = " << discount_coast <<" rupees."<<endl;
	// tax on mealcoast after discount.
	tax = ( discount_coast * 10.75 / 100);
	cout << "Tax @ 10.5% ammount = " << tax <<" rupees."<<endl;
	
	tip = ( discount_coast + tax ) * 21 / 100;
	cout << "Tip @ 21% ammount = " << tip << " rupees."<<endl;
	
	total = ( discount_coast + tip + tax);
	cout << "Total bill coast = " << total <<" rupees."<<endl;
	
	return 0;	
}
