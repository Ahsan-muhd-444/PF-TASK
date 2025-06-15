#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
void fun()
{
	fstream file("LibraryManagment.txt", ios :: app);
	file <<1<<"  "<<"PROGRAMMING"<<"  "<<"AHSAN"<<"  "<<36501;
	file.close();
}


int main()
{
	
	
	fun();
	
	
	system("cls");
	fstream file("LibraryManagment.txt" ,ios::in);        //A FILE OF LIBRARY MANAGEMENT SYSTEM SO THAT I WILL AUTOMATICALLY DISPLAY DATA OF THE FILE
	string book_title, author_name,line;
	long long ISBN;
	int book_num;
	
	cout<<"\n\t\t\t---------------------------------------------------------------"<<endl;
	cout<<"\n\t\t\tBOOKS FOUND IN THE RECORD"<<endl;
	cout<<"\n\t\t\t---------------------------------------------------------------"<<endl;
	cout<<endl;
	
		
	cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout << "SEQ                 BOOK TITLE                  AUTHOR NAME                  ISBN NUMBER"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
	while(file >> book_num >> book_title >> author_name >> ISBN)
	{	
		
        cout << book_num <<"."<< "       " << book_title << "       " << author_name << "        " << ISBN << endl;
	}
	
	file.close();


return 0;
}
