#include <iostream>
using namespace std;
int main(){



    int number;
	cout<<"PLEASE ENTER A NUMBER FROM 1 TO 9: ";
	cin>>number;   
       
       
       if(number==3)
       {
       	
       	for(int i=1; i<=1; i++)
       	{
       		cout<<"1 "<<endl;
       		cout<<"1  2 "<<endl;
       		cout<<"1  2  3"<<endl;
		   }
       	
	   }
	   
	      else if(number==5)
	   {
	   	
	   	for(int j=1; j<=5; j++)
		   {
	   		
	   		
	   		
	   		for(int k=1; k<= 5-j ; k++)
	   		cout<<" ";
	   		
	   		for(int l=1; l<=(2*j-1); l++)
	   		cout<<"*";
		  
		    cout<<endl;
			
			
			 }
		 
	   	
	   	
	   	
	   }

else if(number==7)
 {
 	
 	for(int i=7; i>=1; i--)
 	{
 		for(int num2=0; num2<=7-i; num2++)
 		cout<<" ";
 		
 		for(int num3=0; num3<=(2 * i - 1); num3++)
 		cout<<"*";
 		
 		cout<<endl;
 		
	 }
 	 	
 }

else{
	
	cout<<"INVALID INPUT!!!!! :) ";
}

   return 0;

}