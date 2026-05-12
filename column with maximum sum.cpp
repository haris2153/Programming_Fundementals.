	#include<iostream>
	#include<climits>
	using namespace std;
	int main()
	{
		int n;
		cout <<"Enter rows:"<<endl;
		cin  >> n;
		int m;
		cout <<"Enter columns:"<<endl;
		cin  >> m;
		int a[n][m];
		cout <<"Enter matrix:"<<endl;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j]; 
			}
			cout << endl;
		}
		//finding column with maximum sum.
		int max = INT_MIN;
		int index = 0;
		for(int j = 0; j < m; j++){
			int sum = 0;
			for(int i = 0;i < n; i++){
				sum += a[i][j];
			}
			if(max < sum)
			{
				max = sum;
				index = j;
			}
		}
		cout <<"The column with maximum sum is:"<<endl<<index+1<<endl;
		return 0;	
	}
