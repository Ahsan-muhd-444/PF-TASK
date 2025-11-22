#include <iostream>
using namespace std;

int main()
{
 int size;
  cout<<"Please enter an array size = ";
  cin>>size;
  
  if(size<=0 || size>=10)
  {
  	cout<<"Your array size input is incorrect......"<<endl;
  	
  }
  
  
  int a[10];
  
  
  for(int i=0; i<size; i++)
  {
  	cout<<"Enter ur values for ["<<i<<"] index = ";
  	cin>>a[i];
  	
	  	 }  
		 
	int max= a[0];	
	int min= a[0];        	
	
  for(int i = 1 ; i<size; i++)
  {
  	 if( a[i]>max)
  	 {
  	 	max = a[i];
	   }
	   
	   
 if( a[i]<min)
  	 {
  	 	min = a[i];
	   }
	   
	   
  }
	
	
	cout<<"Maximum number = "<<max<<endl;
    cout<<"Minimum number = "<<min<<endl;
  	
  	
	
	
	
	
	return 0;
}