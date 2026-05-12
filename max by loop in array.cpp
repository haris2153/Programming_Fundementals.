#include<iostream>
using namespace std;

int main()

{
	int arr[5] = {1,14,5,20,11};
	int max = arr[0];
	
	for(int i = 0; i < 5; i++)
	{
		if(arr[i] > max)
		max = arr[i];
	}
	cout<<max;
	
	for(int j = 0; j < 5;j++)
	{
		cout<<" "<<arr[j];
		arr[j]++;
	}
}
