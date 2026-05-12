#include<iostream>
#include<conio.h>
using namespace std;
	int prime(int n)
{
	int fact = 1;
	int p = 1;
	for(int i = 2; i <= n/2 ;i++)
	{
		if(n % i == 0)
		{
			p = 0;
		}
	}
	if(p == 1)
	{
		cout << "Prime number"<<endl;
	}
	else
	{
		cout << "composite number"<<endl;
	}
	
	return 0;
}
int main()
{
	int num;
	
	cout <<"Enter a number:"<<endl;
	cin  >> num;
	
	
	prime(num);
	cout << "..................." <<endl;
	getch();
	
}
