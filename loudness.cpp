#include<iostream>
using namespace std;
int main()
{
	int loudness;
	cout << "Enter loudness in decibells (db):" << endl;
	cin  >> loudness;
	
	if(loudness <= 50)
	{
		cout << "Quite" << endl;
	}
	else if (loudness <= 70)
	{
		cout << "intrusive" << endl;
	}
	else if (lousness <= 90)
	{
		cout << "Annoying" << endl;
	}
	else if(loudness <= 110)
	{
		cout << "Very Annoying" << endl;
	}
	else
	{
		cout << "Uncomfortable" << endl;
	}
	return 0;
}
