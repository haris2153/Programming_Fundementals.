#include<iostream>
using namespace std;
int main()
{
	int n = 2;
	int cube;
	
	
	for(int i = 1;i <= 10 ; i++)
	{
		cout << cube <<" ";
		cube = (n * n *n);
		n ++;
	}
	return 0;
	
}
