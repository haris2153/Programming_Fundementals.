#include<iostream>
using namespace std;
int main()
{
  int v , s , t;
  
  cout << "Please enter distace covered:"<< endl;
  cin  >> s;
  
  cout << "Please enter the time:"<< endl;
  cin  >> t;
  
  v = s / t;
  cout << "The speed covered in given time is "<< v <<"m/s.";
  
  return 0;
	
}
