#include<iostream>
using namespace std;
int count_triplets(int a[] , int n ,int x)
{
	int count = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			for(int k = j + 1; k < n; k++){
				if(a[i]+a[j]+a[k] == x)
				count++;
			}
		}
	}
	return count;
}
int main()
{
	int n;
	cout <<"Enter array size:" <<endl;
	cin  >> n;
	
	int a[n];
	cout <<"Enter array elements:"<<endl;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	int x;
	cout <<"Enter the value of x:"<<endl;
	cin  >> x;
	
	cout <<"Triplets = ";
	
	cout << count_triplets(a , n , x);
	
	return 0;
	
}
