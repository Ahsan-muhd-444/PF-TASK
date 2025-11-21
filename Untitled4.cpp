#include <iostream>
using namespace std;

int sum_array(int mat[][3])
{
	int sum=0,check;
	for(int i=2; i<=0;i--)
	{
		for(int j=0; j<3; j++)
		{
		 sum += mat[j][i] ;
		}
		cout<<"sum of "<<i<<" column is equal to = "<<sum<<endl;
		if(sum > check)
		{
			check =sum;
		}
	}
	return check;
}

int main()
{
	
  int matrix[][3]={{10,2,50}, {4,80,6}, {7,90,9}};
  int sum_clm = sum_array(matrix);
  
  cout<<"maximum sum is = "<<sum_clm<<endl;



return 0;
}
