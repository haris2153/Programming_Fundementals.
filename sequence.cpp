#include<iostream>
using namespace std;

int main()

{
	int arr[5] = {11,33,44,89,36};
	int max = arr[0];
	
	for(int i = 0; i < 5; i++)
	{
		if(arr[i] > max)
		max = arr[i];
	}
	cout<<max;
	
	for(int j = 0; j < 4;j++)
	{
		cout<<" "<<arr[j];
		arr[j]++;
	}
}
