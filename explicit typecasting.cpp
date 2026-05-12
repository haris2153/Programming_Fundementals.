 /*Write a program that prompts the user to input an integer between 0 and 35.If
 the number is less than or equal to 9, the program should output the number;
 otherwise, it should output A for 10, B for 11, C for 12...andZ for 35.(Hint:
 Use the cast operator, static_cast<char>( ), fornumbers>= 10.)*/
 #include<iostream>
using namespace std;
int main()
{
  int num;
  cout << "Please enter a number" << endl;
  cin  >> num;
  
  if(num <= 9)
  {
  	cout << num << endl; 
  }	
  else if( num >= 10)
  {
  
  	cout << static_cast<char>(num - 10 + 'A') << endl;
  }
	return 0;
}
)
