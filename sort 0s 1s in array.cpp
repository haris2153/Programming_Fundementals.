#include<iostream>
using namespace std;
int main()
{
	int noo = 0;
	int noz = 0;
	int n = 8;
	int a[n] = {0,1,0,0,1,1,0,1};
	for(int i = 0; i < n;i++)
	{
		if(a[i] == 0) noz++;
		else noo++;	
	
	}
	for(int i = 0; i < n;i++)
	{
		if(i < noz) a[i] = 0;
		else a[i] = 1;
		cout << a[i] <<" ";
	}
}
