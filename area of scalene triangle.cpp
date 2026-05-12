#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a , b , c , s , A , area;
	
	cout << "Enter side 1:" << endl;
	cin  >> a;
	
	
	cout << "Enter side 2:" << endl;
	cin  >> b;
	
	
	cout << "Enter side 3:" << endl;
	cin  >> c;
	
	s = (a + b + c) / 2;
	cout << "semi perimeter= " << s << " meters" << endl;
	
	A = s * (s - a) * (s - b) * (s - c);
	area = sqrt(A);
	cout << "Area of scalene triangle = " << area <<" metersquare" << endl;
	
	return 0;
	  
}
