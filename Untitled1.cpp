#include <iostream>
using namespace std;
int main()
{
	int input,count =0;
	int matrix[4][3]={{1,2,3}, {4,5,6}, {7,8,9},{10,11,12}};
	cout<<"PLEASE ENTER THE NUMBER YOU WANT TO SEARCH : ";
	cin >> input;
//	for(int i=0 ; i<4; i++)
//   {
//   	for(int j=0; j<3; j++)
//   	{
//   		cout<<"Please enter the Value at 2D array at "<<i<<" row and "<<j<<" column is = ";
//   		cin>>matrix[i][j];
//   		
//	}
//
//  }
//   for(int i=0 ; i<4; i++)
//   {
//   	for(int j=0; j<3; j++)
//   	{
//   		cout<<"Value of 2D array at "<<i<<" row and "<<j<<" column is = "<<matrix[i][j]<<endl;
//   		
//   		
//	}
//cout<<endl;
//  }
  for(int i=0; i<4; i++)
  {
  	for(int j=0; j<3; j++)
  	{
  		if (input == matrix[i][j])
  		{
  			count=1;
  			cout<<"NUMBER FIND AT "<<i<<" ROW AND "<<j<<" COLUMN OF 2D ARRAY"<<endl;
  			cout<<"your number is = "<<matrix[i][j]<<endl;
  			break;
		  }
	  }
  }
  if(count == 0)
  {
  	cout<<"SORRY NO SUCH NUMBER IS FOUND"<<endl;
  }

return 0;
}
