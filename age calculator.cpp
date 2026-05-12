#include<iostream>
using namespace std;
int main()
{
 int birthyear ,currentyear, birthmonth , currentmonth;
 int ageinyears , ageinmonths ;
 
 cout <<"Enter current year:" <<endl;
 cin  >> currentyear;
 
 cout <<"Enter your birth year:"<<endl;
 cin  >> birthyear;
 
 cout <<"Enter current month:"<<endl;
 cin  >> currentmonth;
 
 cout <<"Enter your birth month:"<<endl;
 cin  >> birthmonth;
 
 ageinyears = currentyear - birthyear;
 ageinmonths = 12 - birthmonth; 
 
 cout << "your age is "<<ageinyears<<" years and "<<ageinmonths<<"months.";
 
 return 0;	

}	
