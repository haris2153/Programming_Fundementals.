#include<iostream>
using namespace std;
int main()
{	int num = 1;
	for(int i = 1 ;i <= 4; i++)
	{
		for(int j = 1; j <= num ; j ++)
		{
			cout << "*" ;
			
		}
		cout <<endl;
		num += 2;
	}
	return 0;
}
