#include <iostream>
using namespace std;

int main () {
    double  num;
    int factor;
    cout << "Please enter one number, please:" << endl;
    cin >> num;
    factor = num;
    if ( (num - factor) == 0)
        cout << "According to my calculations that is an integer" << endl;
    else
        cout << "According to my calculations that is NOT an integer" << endl;
    
    return 0;
}