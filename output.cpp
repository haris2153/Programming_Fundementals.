#include<iostream>
using namespace std;
int main()
{
	int num;
	cout <<"Enter a number:"<<endl;
	cin >> num;
	int sum = 0;
	int last_digit;
	
	while(num > 0)
	{
		last_digit = num % 10;
		sum = sum + last_digit;
		num /= 10;
	}
		cout << sum <<endl;
	return 0;
}

