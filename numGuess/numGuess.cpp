/*************************************
 * **Desription: This program will ask the user to enter a secret number and then let the user guess that number. It will provide feedback indicating whether a guess is too low, too high, or correct. If correct, the program will also indicate how many times the user guessed before guessing correctly.
 * *************************************/


#include <iostream>
#include <string>
using namespace std;

int main()
{
    int secret, guess, counter = 0; //declaring the three variables.

    cout << "Please enter the number for the player to guess:" << endl; //asking for the secret number.
    cin >> secret;

    guess = secret - 1; //initializing variable guess as a value different than secret to prevent it defaulting to zero and causing an error on the first test of the while condition.

    cout << "Enter your guess:"<<endl; //ask for a guess.

    while(guess != secret) //the loop will continue for as long as the user's guess does not equal the secret integer.
    {
        cin >> guess;
    
        if(guess < secret) //if the guess is lower than the secret.
            cout << "Too low. Guess again:" << endl; 
        else if(guess > secret) //if the guess is higher than the secret.
            cout << "Too high. Guess again:" << endl;
        else //if the guess is neither higher or lower than the secret, it is correct.
            cout << "Exactly!" << endl; 
        
        counter++; //incrementing a counter keeps track of how many guesses it takes the user to guess correctly.
    }

cout << "You correctly guessed the secret number, " << secret << ", in " << counter << " tries!"<<endl; //feedback.
return 0; //normal program termination.
}

