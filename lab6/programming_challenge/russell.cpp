#include <iostream>
using namespace std;
int main()

{
  double number;
  cout << "Please enter a number" << endl;
  cin >> number;
  if (number > int(number) or number < int(number))
    {
      cout << number << endl;
      cout << "Not an interger" << endl;
    }
  else
    {
      cout << number << endl;
      cout << "Interger" << endl;
    }
  return 0;
}
