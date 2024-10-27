#include<iostream>
using namespace std;
int main()
{
int choice;

do{
	cout<<"menu"<<endl;
cout<<"1.print hello"<<endl;
cout<<"2.print world"<<endl;
cout<<"3.exsit"<<endl;
cout<<"enter a choice"<<endl;
cin>>choice;
switch(choice)
{

case 1:
cout<<"print hello" ;
break;
case2:
cout<<"print world" ;
break;
case3:
cout<<"print exist" ;
break;
   default:
    cout<<"invalid choice";
   }
  }
while(choice!=3);


return 0;
}
