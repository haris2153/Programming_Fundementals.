// 10, 9, 18, 17, 34, 33, 66, …
#include<iostream>
using namespace std;
int main()
{
	int num = 10;
	int x ;
	for(int i = 1; i <= 10;i++)
	{
		cout << num <<" ";
		
		if(num % 2 == 0)
		 num = num - 1;
		else
		 num = num * 2; 
			
		
	}
	return 0;
}
