#include <iostream>
using namespace std;

int sum_array(int mat[][3])
{
	int sum=0,check;
	for(int i=0; i<3;i++)
	{
		sum = 0;
		for(int j=0; j<3; j++)
		{
		 sum += mat[i][j] ;
		}
		cout<<"sum of "<<i<<" row is equal to = "<<sum<<endl;
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
  
  cout<<"sum of is = "<<sum_array(matrix)<<endl;



return 0;
}
