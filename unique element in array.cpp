#include<iostream>
using namespace std;
int unique(int a[] , int n)
{
	int count;
	for(int i = 0; i < n; i++)
	{	
		count = 0;
		
	 for(int j = 0; j < n; j++)
		{
			if((i != j) && (a[i] == a[j])) count++;
		}
	
	 //unique number
	 if(count == 0)
	 {
	 cout << a[i] << endl;
		break;
		}
	}
}
int main()
{
	
	int n = 7;
	int a[n] = {1,2,1,2,3,4,4};
	
	unique( a , n);
	
	return 0;
}
