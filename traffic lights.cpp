#include<iostream>
using namespace std;
int main()
{

	int ch;
	
	cout <<"1.)red , 2.)green , 3.)yellow 4.)Blinking light " <<endl;
	cout << "Enter your choice:"<<endl;
	cin  >> ch;
	
	if(ch == 1)
	{
		cout << "STOP:"<<endl;
	}
	else if(ch == 2)
	{
		cout << "GO" <<endl;
	}
	else if(ch == 3)
	{
		cout << "Ready To Go" <<endl;
	}
	else if(ch == 4)
	{
		cout << "Proceed to precautions." << endl;
	}
	else
	{
		cout <<"Invalid choice."<<endl;
	}
	return 0;
}

