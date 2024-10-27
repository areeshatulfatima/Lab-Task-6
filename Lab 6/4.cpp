#include<iostream>
using namespace std;
int main()
{
	  int choice;
    do {
cout << "\nMenu:\n";
cout << "1. Print Hello\n"; 
cout << "2. Print World\n"; 
cout << "3. Exit\n";
cin>>choice;
switch (choice) 
{
            case 1:
                cout<<"Hello";
                break;
            case 2:
                cout<<"World";
                break;
            case 3:
                cout<<"Exiting...";
                break;
            default:
                cout<<"Invalid choice. Please try again.";
        }
    } 
	while (choice != 3);

    return 0;
}




