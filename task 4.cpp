#include <iostream>
using namespace std;
int main()
{

         int size;
         
         cout<<"Please eneter the array size = ";
         cin>>size;
         
         int array[10];
         if(size<=0 || size >=10)
         {
         	cout<<"Please enter the correct array size less then 10......"<<endl;
		 }
else
{
	  for(int i =0; i<size; i++)
	  {
	  	cout<<"Please enter value for index ["<<i<<"] = ";
	  	cin>> array[i];
	  	
	  	
	  }
	     cout<<endl;
    int sum=0;
    int oddsum=0;
	for(int i=0; i<size; i++)
	{
		if (array[i] %2 ==0)
		{
		 cout<<array[i]<<" =   Is an even integer "<<endl;	
		 sum= sum+1;
		}
		else if(array[i]%2 !=0)
		{
			cout<<array[i]<<" =   Is an odd integer"<<endl;
			oddsum=oddsum+1;
		}
		
	}
	
	
	cout<<"Total number of even integers = "<<sum<<endl;
	cout<<"Total number of odd integers = "<<oddsum<<endl;
	}		 
return 0;
}