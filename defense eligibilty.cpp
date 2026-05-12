#include<iostream>
using namespace std;
int main()
{
    int age;
    char marital_status, gender;

    cout << "Please enter age: ";
    cin >> age;

    cout << "Please enter marital status (s = single / m = married): ";
    cin >> marital_status;

    cout << "Please enter gender (M = male / F = female): ";
    cin >> gender;

	if(age >= 18)
	{	
		if(age <= 26)
		{	
			if(marital_status == 's')
			{	
				if(gender == 'M')
				{
					cout << "Person is male" << endl;
				}
				else
				{
					cout << "Persom is Female" << endl;
				}
			}
			else
			{
				cout << "Person is married." << endl;
			}
		}
		else
		{
			cout << "Person is older than 26." << endl;
		}
	}	
	else
	{
		cout << "Person is younger than 18." << endl;
	}
	
	return 0;
}
