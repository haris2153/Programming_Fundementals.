#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,14,5,20,11};
	int max = INT_MIN;
	int temp;
	for(int i = 0; i < 5;i++)
	{
		if(max < arr[i])
		max = arr[i];
	}
	
	cout << endl;
	
	for (int i = 0; i < 5;i++)
	{
		//shifying maximum to the left of array
		temp = arr[0];
		arr[0] = max;
		cout << arr[i] <<" ";	
	}
	
}
