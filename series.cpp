// 5 10 15 20 20  15 10 5 10 15 20 20
#include<iostream>
using namespace std;
int main()
{
	int num = 5;
	int sum ;
	
	
	for(int i = 1 ; i <= 12 ; i++)
	{
		cout << num << " ";
		sum = sum + num;
		
		if(i < 4)
		 num += 5;
		else if(i == 4)
		 num = num ;
		else if (i < 8)
		 num -= 5;
		else if(i < 11)
		 num += 5;
		 else
		 num = num;
	}
	
	
	return 0;
}
