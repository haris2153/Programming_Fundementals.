//conversion of second to hours,minutes and seconds.
#include<iostream>
using namespace std;
int main()
{
	float hours , minutes , seconds;
	float total_seconds = 2;
	
	hours = (total_seconds / 3600);
	minutes = (total_seconds / 60);
	
	cout << "hours = " << hours << endl;
	cout << "minutes = "<< minutes <<endl;
	cout << "seconds = "<< total_seconds <<endl;
	
	return 0;
	
}
