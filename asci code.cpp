#include<iostream>
using namespace std;
int main()
{
	char x;
	
	cout << "Please enter a charater:" << endl;
	cin  >> x;
	
	cout << "ASCI code of character is :" << static_cast<int>(x);
	
	return 0;
}
