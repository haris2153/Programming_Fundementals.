#include<iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Enter size of an array";
	cin  >> n;
	
	int a[n];
	int i;
	for(i=0; i < n; i++)
	{
		cin >> a[i];
	}
	for(i=0; i < n; i++)
	{
		if(a[i] > a[i + 1]) 
		 break;	
	}	
	if(i == n - 1) cout <<"sorted array";
	else cout << "unsorted array";
} 
