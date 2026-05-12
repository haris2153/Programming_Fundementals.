#include <iostream>
using namespace std;
int main()
{
	float inch , cm;
	
	cm = inch * 2.54;
	
	cout<< "Enter value in inches:" <<endl;
	cin >> inch;
	
	cm = inch * 2.54;
	cout<< "The length in centimeters is:"<< cm << "cm" <<endl;
	
	return 0;
	
}
