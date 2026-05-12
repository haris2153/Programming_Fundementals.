#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char x;
	
	cout << "Enter a character" << endl;
	cin  >> x;
	
	if(isalpha(x))
	{  if(islower(x))
		{ if(isupper(x))
		   {
		   }
		   else
		    cout << "lower" << endl;
		}
		else
		 cout << "upper" << endl; 
	}
	else
	 cout << "Special Charater" << endl;

	return 0;
}
