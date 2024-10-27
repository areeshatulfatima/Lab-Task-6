#include <iostream>
using namespace std;

int main() {
    string cor_pass = "123";
    string e_pass;
    int attempts = 0;

    do {
        cout<<"Enter password: ";
        cin>>e_pass;
        attempts++;

        if (e_pass == cor_pass) {
            cout<<"Access granted.";
            break;
        } else {
            cout<<"Incorrect password. ";
        }
    } while (attempts < 3);

    if (attempts == 3 && e_pass != cor_pass) {
        cout<<"Access denied.";
    }

    return 0;
}


