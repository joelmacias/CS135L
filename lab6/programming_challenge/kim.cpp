/* CS135L Week #6
 /* Programming challange #1
 /*
 Write an interactive C++ program that prompts the user for one number.
 Determine if the number the user typed in is an integer.
 For the purpose of this challenge, we will say that a number with
 a decimal part that is all 0s is also an integer, such as 7.0
 */
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double dNum=0;
    
    cout << "Enter a number: ";
    cin >> dNum;
    cout << "Number entered is: " << dNum << endl;
    if (floor(dNum) == dNum)
        cout << "Number entered is an integer: " << dNum << endl;
    else
        cout << "Number entered is an real: " << dNum << endl;
    return 0;
}