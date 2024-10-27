#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout<<"Enter a positive integer N: ";
    cin>>N;

    for (int i = 1; i <= N; i++) {
        sum += i * i;
    }

    cout<<"Sum of squares of natural numbers is "<<sum;
    return 0;
}

