#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int m;
	cout <<"Enter rows:"<<endl;
	cin  >> m;
	int n;
	cout <<"Enter columns:" << endl;
	cin  >> n;
	
	int a[m][n];
	cout <<"Enter matrix:"<<endl;
	for(int i = 0;i < m; i++){
		for(int j = 0;j < n; j++){
			cin >> a[i][j];
		}
		cout <<endl;
	}
	int max = INT_MIN;
	int index = 0;
	for(int i = 0; i < m; i++){
			int sum = 0;
		for(int j = 0; j < n; j++){
			sum += a[i][j];
		}
		if(max < sum)
		{
			 max = sum;
			index = i;
		}
	}
	
	cout <<index + 1 <<endl;
	return 0;
}
