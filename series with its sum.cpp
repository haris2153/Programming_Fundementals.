#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    int sum = 0;
    
    for(int i = 1 ; i <= 13 ; i++)
    {
        cout << num << " ";
        sum = sum + num;
        
        if(i < 5)           // 5 ? 25
            num += 5;
        else if(i < 9)      // 25 ? 5
            num -= 5;
        else                // 5 ? 25
            num += 5;
    }
    
    cout << "\nSum = " << sum;
    
    return 0;
}
