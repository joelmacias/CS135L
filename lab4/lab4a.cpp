#include<iostream>
#include<cmath> 

using namespace std; 


int main(){

double three = 3.0; 

// calculate square root of 3
int sqrtThree = sqrt(three);
  

double denominator = 4.0; 

cout << "Enter the triangle's side" <<endl; 
double side = 0;
cin >> side; 

double result = (sqrtThree/denominator) * pow(side, 2.0);

cout<<"The area is: " << result << endl;
 

return 0;
}
