#include<iostream>
using namespace std;
int main()
{
	int num1;
	cout<<"Please enter a number : ";
	cin>>num1;
	
	if(num1 % 2 == 0)   //to check its if input number is even number
	{
		for(int i= 1; i<=num1; i++)   //for number of rows
		{
				for(int j = 1 ; j<=i; j++) //number of coloumn
			{
				cout<<"*";
			}
			cout<<endl;
			
		}
		
		
	}
	else{
			for(int i=1; i<=num1; i++)
		{
			cout<<"                    * "<<endl;}
		
	}
	
	     
	
	
	
	
	
	
	
	
	
	
	
	
}