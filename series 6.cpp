#include<iostream>
using namespace std;
int main()
{
	for(int j = 1; j <= 5; j++)
		{
			cout << "*";
		}
		cout <<endl;
	
	for(int i = 1; i <= 5; i++)
	{
	
		cout << "*" ;
		for(int k = 3; k <= 5; k++)
		cout <<" ";
		cout <<"*"<<endl;
	}

	for(int j = 1; j <= 5; j++)
		{
			cout << "*";
		}
	return 0;
}
