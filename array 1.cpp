#include<iostream>
using namespace std;
int count_x(int a[],int n,int x){
	n = 6;
	int count=0;
 x = 6;
	
	for(int i = 0; i < n;i++ ){
		if(a[i]> x) 
		count++;
		 
	}

	return count;
}
int main()
{
	int x = 6;
	int n = 6;
	int a[n]={2,5,8,9,11,5};
	cout << count_x(a,n,x);
	return 0;
}
