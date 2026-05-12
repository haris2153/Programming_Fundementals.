#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

	char ch;
	cout << "Enter your choice:" << endl; 
	cin >> ch;
	
	switch(ch)
	{
		case '1':
		cout << "Friday." << endl;
		break;
		
		case '2':
		cout << "Saturday." << endl;
		break;
		
		case '3':
		cout << "Sunday."	<< endl;
		break;
	
		
		case '4':
		cout << "Monday."	<< endl;
		break;
	
		
		case '5':
		cout << "Tuesday."	<< endl;
		break;	
	
		
		case '6':
		cout << "Wednesday."	<< endl;
		break;
	
		case '7':
		cout << "Thursday."	<< endl;
		break;
	
		default:
		cout << "Exit." << endl;		
		break;
	}
	
	return 0;
}
