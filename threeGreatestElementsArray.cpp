#include<iostream>
#include<climits>
using namespace std;
void three_greater(int a[],int n)
{
	int max_1 = INT_MIN;
	int max_2 = INT_MIN;
	int max_3 = INT_MIN;
	
	for(int i = 0; i < n;i++)
	{
		if(a[i] > max_1)
		{
			max_3 = max_2;
			max_2 = max_1;
			max_1 = a[i];
		}
		else if(a[i] > max_2)
		{
			max_3 = max_2;
			max_2 = a[i];
		}
		else if(a[i] > max_3)
		{
			max_3 = a[i];	
		}
	}
	if(max_1 == INT_MIN) cout << "NO max 1"<<endl;
	else cout <<max_1<<endl;
	
	if(max_2 == INT_MIN) cout << "NO max 2"<<endl;
	else cout <<max_2<<endl;
	
	if(max_3 == INT_MIN) cout << "NO max 3"<<endl;
	else cout <<max_3<<endl;
	
	return;
}
int main()
{
	int n;
	
	cout <<"Enter the array size"<<endl;
	cin  >> n;
	
	int a[n];
	cout <<endl;
	cout <<"Enter array elements"<<endl;
	for(int i = 0; i < n; i++ )
	{
		cin >> a[i];
	}
	cout << endl;
	cout <<"Three greatest elements of array are:"<<endl;
	
	three_greater(a , n);
	
	return 0;
}
