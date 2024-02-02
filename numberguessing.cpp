#include<bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "Can you guess the number between 1 and 100?\n\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "\nCongratulations! You guessed the correct number in " << attempts << " attempts.\n";
        }

    } while (guess != secretNumber);

    return 0;
}
