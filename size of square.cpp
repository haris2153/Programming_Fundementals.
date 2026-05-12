//Input the  square and print:

//“Small square” if side < 5

//“Medium square” if 5 <= side < 10

//“Large square” if side = 10
#include<iostream>
using namespace std;
int main()
{
	int side = 0;
	cout << "Please enter a side of a square:" << endl;
	cin  >> side;
	
	if(side < 5)
	{
		cout << "Small aquare." << endl;
	}
	else
	{
		if(5 <= side <= 10)
		{
			cout << "Medium square." << endl;
		}
		else
		{
			if(side >= 10)
			{
				cout << "Large square." << endl;
			}
		}
	}
	
	return 0;

}
