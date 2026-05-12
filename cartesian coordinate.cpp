#include<iostream>
using namespace std;
int main()
{
	int x , y;
	
	cout << "Enter x coordinate:" << endl;
	cin  >> x;
	
	cout << "Enter y coordinate:" << endl;
	cin  >> y;
	
	

	if(x == 0)
 	{
		cout << "Origin" <<endl;

		if( x > 0 )
 		{	
	 		if( x < 0)
 			{
 				if(y > 0 )
 				{	
 					cout << "2nd quadrant." << endl;
				}
				else
				{
					cout << "3rd quadrant." << endl;
				}
			}
 			if(y > 0 )
 			{
 		  	cout << "Ist Quadrant." << endl;	
			}
			else
			{
				cout << "4th Quadrant." << endl;
			}
		}
 	}
 	else
 	{
 	}

	return 0;
}
