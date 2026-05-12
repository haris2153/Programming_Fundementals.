	//shift the element to the left of array.
	#include<iostream>
	#include<climits>
	using namespace std;
	int main()
	{
	int n;
	cout << "Enter array size:"<<endl;
	cin  >> n;
	int a[n];
	cout << "Enter array elements:" << endl;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << endl;
	//maximum and its index
	int max = INT_MIN; 
	int maxindex = 0;
	for(int i = 0; i < n; i++)
	{
		if(max < a[i])
		{
		max = a[i];
		maxindex = i;
		}
	}
	int temp = a[maxindex];
	
	//left shift
	for(int i = maxindex; i > 0; i--)
	{
		a[i] = a[i - 1];	
	}	
	//print
	
	 a[0] = temp;
	for(int i = 0; i < n; i++)
	{
		cout << a[i]<<" ";
	}
	return 0;
	}
	
