 //The following program determines an employee’s weekly wages. If the hours worked
 //exceed 4, wages include overtime payment
 #include<iostream>
 using namespace std;
 int main()
 {
 	int hours , payment , wages , overtime;
 	
	cout << "Enter working hours: " << endl;
 	cin  >> hours;
 	
 	cout << "Enter 1 hour payment:" << endl;
 	cin  >> payment;
 	
 	cout << "Enter overtime:" << endl;
 	cin  >> overtime;
 	
 	if(hours > 4)
 	{
 		wages = (hours * payment) + (overtime * payment);
 		cout << "Wage = " << wages << " Rs" << endl;	
	}
	else
	{
		wages = (hours * payment);
		cout << "Wage = " << wages << " Rs" << endl;
	}
	return 0;
 }
