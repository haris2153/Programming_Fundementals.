#include<iostream>
using namespace std;
int main()
{
	float meal_coast , tax ,tip ,total;
	
	meal_coast = 800;
	cout << "Meal coast is " << meal_coast <<"rupees"<< endl;
	
	tax = (800 * 10.75/100);
	cout << "Tax ammount is " << tax <<"rupees"<<endl;
	
	tip =  (tax + meal_coast) * 21 / 100;
	cout << "Tip ammount is:" << tip <<"rupees"<<endl;
	
	total = (meal_coast + tip + tax);
	cout << "Total ammount is " << total <<"rupees"<<endl;
	
	return 0;
}
