#include <iostream>
using namespace std;
int main()
{
	int num1 , num2;
	
	cout <<"Enter first interger:"<<endl;
	cin  >> num1;
	
	cout <<"Enter second integer:"<<endl;
	cin  >>num2;
	
	if((num1 % num2) ==0 )
	{
		cout << "First integer is the multiple of second."<<endl;
	}
	else
	{
		cout <<"No, first integer is not the multiple of second."<<endl;
	}
	return 0;
}
