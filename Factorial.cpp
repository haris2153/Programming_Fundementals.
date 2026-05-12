#include<iostream>
#include<conio.h>
using namespace std;
	int odd(int n)
{
	int fact = 1;
	for(int i = 1; i <= n ;i++)
	{
		fact = fact * i;
	}
	return fact;
}
int main()
{
	int num;
	
	cout << "1! = " << odd(1) << endl;
	cout << "3! = " << odd(3) << endl;
	cout << "5! = " << odd(5) << endl;
	cout << "7! = " << odd(7) << endl;
	
	odd(num);
	getch();
}
