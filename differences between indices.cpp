#include<iostream>
using namespace std;
int difference(int arr[] , int n)
  {
  	int even = 0;
  	int odd = 0;
	for(int i = 0; i < n;i++)
	{
		if(i % 2 == 0)	 even += i;
		else  odd += i;
	}
	return even - odd;	
  }
int main()
{
	int n;
	cout <<"Enter size of an array:";
	cin  >> n;
	int arr[n];
	cout <<"Enter array elements:";
	for(int i = 0;i < n; i++)
	{
		cin >> arr[i];
	}
	
	cout <<"The difference of indices is:"<< difference(arr , n);
	
	return 0;
}
	
	

