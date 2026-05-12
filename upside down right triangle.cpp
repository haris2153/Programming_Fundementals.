#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << endl;

    int spaces = 0; 

    for (int i = n; i >= 1; i--) 
	{
       
        for (int s = 0; s < spaces; s++) 
		{
            cout << " ";
        }
		for (int j = 1; j <= i; j++) 
		{
            cout << j;
        }
			
		cout << endl;
		
		if (i > 9)
		{
            spaces += 2; 
        } 
		else 
		{
            spaces += 1; 
        }
    }

    return 0;
}

