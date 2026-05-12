#include<iostream>
using namespace std;
int main()
{
	double mealcoast_1 = 500;
	double mealcoast_2 = 800;
	double tax_1 ;
	double tax_2;
	double tip_1;
	double tip_2;
	double total_1;
	double total_2;
	double grand_total;
	
	mealcoast_1 = 500;
	cout << "Meal coast of one meal is "<< mealcoast_1 <<"rupees"<<endl;

	mealcoast_2 = 800;
	cout << "Meal coast of one meal is "<< mealcoast_2 <<"rupees"<<endl;
	
	
	tax_1 = (mealcoast_1 * 16.5 / 100);
	cout << "Tax ammount is of first meal is "<< tax_1 <<" rupees"<<endl;

	tax_2 = (mealcoast_2 * 12.5 / 100);
	cout << "Tax ammount is of second meal is "<< tax_2 <<" rupees"<<endl;
	
	tip_1 = ( mealcoast_1 + tax_1 ) * 20 / 100;
	cout << "Tip ammount of first meal is "<< tip_1 <<" rupees"<<endl;
	
	
	tip_2 = ( mealcoast_2 + tax_2 ) * 20 / 100;
	cout << "Tip ammount of second meal is "<< tip_2 <<" rupees"<<endl;
	
	total_1 = (mealcoast_1 + tax_1 +tip_1);
	cout << "Total ammount is "<< total_1 <<" rupees"<<endl;
	
	
	total_2 = (mealcoast_2 + tax_2 +tip_2);
	cout << "Total ammount is "<< total_2 <<" rupees"<<endl;
	
	grand_total = ( total_1 + total_2);
	cout << "Grand total of both meals is " << grand_total <<" rupees"<<endl;
	
	return 0;
	
}
