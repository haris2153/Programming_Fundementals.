#include<iostream>
using namespace std;
int main()
{
	int a , v , u , t ;
	
	cout << "final velocity is:"<<endl;
	cin  >> v;
	
	cout << "initial velocuty is:"<<endl;
	cin  >> u;
	
	cout << "time travelled is:" <<endl;
	cin  >> t;
	
	a = ( v - u ) / t;
	cout << "acceleration is "<< a << "m/s²";
	
	return 0;	
}
