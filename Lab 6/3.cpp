#include <iostream>
using namespace std;

int main()
 {
    int secretNumber = 7;
    int guess;
    int attempts = 0;

    cout<<"Guess the secret number (between 1-100): ";
    do {
        cin>>guess;
        attempts++;
        if (guess < secretNumber) 
		{
            cout<<"Too low! Try again: ";
        }
		 else if (guess > secretNumber)
		 {
            cout<<"Too high! Try again: ";
         } 
		else 
		{
            cout<<"Congratulations! You guessed the number in "<<attempts<<" attempts.";
        }
    } 
	while (guess != secretNumber);

    return 0;
}

