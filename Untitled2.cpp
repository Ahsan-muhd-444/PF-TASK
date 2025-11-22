#include <iostream>
using namespace std;
int main()
{
    int array;
 
     cout<<"Please enter array size = ";
     cin>>array;
     
      if(array<=0 || array>10)
      {
      	cout<<"YOUR ARRAY SIZE REACHES MAX LIMIT (10)"<<endl;
	  }
     
  int a[10];
     for(int i=0 ; i< array; i++)
     {
     	
     	cout<<"Enter value for[ " <<i<< " ] index : ";
     	cin>>a[i];
     	
	 }
	for(int i=0; i<array; i++)
     	{
     		cout<<"Value at [ "<< i <<" ] is = "<< a[i]<<endl;
		 }


}
