#include<iostream>
using namespace std;
int main()
{
	int num = 5;
	int sum ;
	
	
	for(int i = 1 ; i <= 13 ; i++)
	{
		cout << num << " ";
		sum = sum + num;
		
		if(i < 5)
		 num += 5;
		else if(i < 9)
		 num -= 5;
		else 
		 num += 5;
	
	}
	
	
	return 0;
}
