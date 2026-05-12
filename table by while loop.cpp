#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	int j = 1;
	
	cout << "Please enter a number:" << endl;
	cin  >> i;
		cout <<"-------TABLE OF "<< i <<"--------"<<endl;
	while(j <= 20)
	{
	
		cout << i << " x " << j << " = " << i * j << endl;
		j++;
	}
		cout <<"--------THE END-------" << endl;
	return 0;
}
