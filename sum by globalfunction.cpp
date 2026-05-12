#include<iostream>
using namespace std;

	int a  , b  , sum;

	void takevaluesofandb()
{
	cout << "Enter two numbers:" <<endl;
	cin  >> a >> b; 
}

	int main()
{
	takevaluesofandb(); //callimg function.
	
	sum = a + b;
	cout <<endl;
	cout << "Sum = "<< sum;
	
	return 0;
	
}


