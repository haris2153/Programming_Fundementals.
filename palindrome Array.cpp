#include<iostream>
using namespace std;
bool ispalindrome(int a[] , int n)
{
	for(int i = 0; i < n  ;i++) // better approach is (i < n /2)
	{
		if(a[i] != a[n-1-i]) return false;
	}
	return true;
}
int main()
{
	int n;
	cout << "Enter size of an array:"<<endl;
	cin  >> n;
	int a[n];
	cout << "Enter elements of the array:"<<endl;
	for(int i = 0;i < n; i++)
	{
		cin >> a[i];
	}
	
    if(ispalindrome(a , n))
    {
    	cout << "Array is Palindrome."<<endl;
	}
	else
	{
		cout <<"Array is not Palindrome."<<endl;
	}
}
