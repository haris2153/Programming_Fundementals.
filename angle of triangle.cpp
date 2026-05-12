#include<iostream>
using namespace std;
int main()
{
	int angle_1 = 45;
	int angle_2 = 25;
	int angle_3 = 0;
	int total = 180;
	
	angle_3 = total - (angle_1 + angle_2 );  
	cout << angle_3 << " degrees" << endl;
	
	return 0;
}
