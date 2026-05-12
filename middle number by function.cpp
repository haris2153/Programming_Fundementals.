#include<iostream>
using namespace std;
void middle(int a , int b , int c)
{
	if(a < b && a < c)
	cout << "a is the mmiddle number."<<endl;
	else if(b < a && b < c)
	cout << "b is the middle number." <<endl;
	else if(c < a && c < b)
	cout << "c is the middle number." <<endl;
	else 
	cout << "a is the middle number." <<endl;
}
int main()
{
	int x = 5;
	int y = 9;
	int z = 7;
	middle(x,y, z);
	return 0;
}
