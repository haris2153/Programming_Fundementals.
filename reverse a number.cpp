#include <iostream>
using namespace std;

int main()
{
    int num = 123;
    int rev = 0;

    rev = rev * 10 + num % 10;   
    num = num / 10;              

    rev = rev * 10 + num % 10;   
    num = num / 10;              

    rev = rev * 10 + num % 10;  

    cout << "Reversed number = " << rev << endl;

    return 0;
}
