/*
 
 CS135L Lab 8 Programming Challenge 2 Template
 
 Write a C++ program that counts the number of lowercase, and uppercase a's that are not followed
 by the letter l. Once '?' is read, stop reading from the file, and output the number of a's.
 
 Use linux redirection to read from the provided file test.txt
 
 Hint: use cin.peek() to check the next character in the file
 
 cin.peek()
 Returns the next character in the input sequence, without extracting it: The character is left as the next
 character to be extracted from the stream.
 
 More info on cin.peek(): http://www.cplusplus.com/reference/istream/istream/peek/
 
 
 */




#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    
    // currentChar will hold the current read character
    char currentChar;
    
    // count will hold the number of A's and a's in the text file
    int count;
    
    // read the first character of the file
    cin >> currentChar;
    
    // keep looping until '?' is found
    while (currentChar != '?') {
        
        if ((currentChar == 'a' || currentChar == 'A') && cin.peek() != 'l') {
            // increment count
            count++;
        }
        // read the next character
        cin >> currentChar;
    }
    
    // print out the number of A's and a's in the file, which will be 212
    cout<<"\nTotal number of lowercase and uppercase a's that are not followed by the letter l: " << count <<endl;
    
    return 0;
}
