#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char x;
	cout << "Enter a character:" << endl;
	cin  >> x;
	
if(islower(x))
{
    if(isupper(x))  
    {

    }
    else
        cout << "lower";	
}
else
    cout << "upper";
    
    return 0;
    
}
