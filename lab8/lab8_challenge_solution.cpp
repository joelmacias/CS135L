/*
 
 CS135L Lab 8 Programming Challenge Solution
 
 Write a guessing game where the user has to guess a secret integer between 0 and 99, inclusive.
 After every guess the program tells the user whether their number was too large or too small. When the user
 guesses the correct number, prompt the user telling them so. Also the number of attempts, and the secret number
 should be printed.
 
 If the user enters a number less than 0 or greater than 99 prompt the user to choose within the range, and DO
 NOT count the guess towards the number of attempts
 
 I have provided you with the following code:
 
 // initializes random seed
 srand (time(NULL));
 
 // the variable secretNumber will hold the secret number the user has to guess
 // generate secret number between 0 and 99
 int secreteNumber = rand() % 100;

 */

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    
    
    // initialize random seem
    srand (time(NULL));

    // generate sercret number between from 0 and 99
    int secretNumber = rand() % 100;
    
    // variable useed to store the user input
    int userGuess = 0;
    
    // variable used to hold the number of attempts
    unsigned int guessAttempts = 0;
    
    // prompting user
    cout<<"Welcome to Guesser 2456 - A Guessing Game"<<endl;
    cout<<"Try to guess the secret number, enter an integer between: 0 and 99: ";
    cin>> userGuess;
    
    
    
    
    // keep looping until
    while (userGuess != secretNumber) {
        if (userGuess > 99 || userGuess < 0) {
            cout<<"Bad user, number must be an integer between 0 and 99."<<endl;
        }
        
        else{
            
            if (userGuess > secretNumber) {
                cout<<"Nope, try a smaller number!"<<endl;
                // increment guesses
                guessAttempts++;
            }
            
            if (userGuess < secretNumber) {
                cout<<"Nope, try a larger number!"<<endl;
                // increment guesses
                guessAttempts++;
            }
            
            
        }
        
        
        
        
        cout<<"Try again: ";
        cin>>userGuess;
        
    }
    
    
    // print out secret number, and total of attempts
    cout << "You gueesed it! The secret number is: " << secretNumber << endl;
    cout << "It took you " << guessAttempts << " attempt(s)" << endl;
    
    
    







  return 0;
}
