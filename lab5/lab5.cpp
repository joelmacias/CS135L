/*
 Lab 5 - Formatting output 

iomanip - contains manipulators used to format output 

setw(n) - Outputs n columns 
        - Only applies to next value to be displayed
	- Content will be right justified by default 
		- cout << left << ...; will left justify content
		- cout << right << ...; will right justify content

setprecision(n) - Controls output of floating-point numbers 
	cout << fixed << setprecision(2); 



*/


#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std; 

int main(){

string mer = "Mercury", ven = "Venus", ear = "Earth", jup = "Jupiter", sat = "Saturn", ura = "Uranus", nep = "Neptune", mar = "Mars";

int n = 17, l = 16;

cout << "Planet Facts" << endl; 
cout << fixed << setprecision(2); 
cout << left << setw(l) << "Planet" << right << setw(n + 3) << "Distance From Sun" << endl; 
cout << left << setw(l) << mer << right << setfill('.') << setw(n) << 6.98*pow(10.0, 7.0) << " km" << endl;
cout << left << setw(l) << ven << right << setw(n) << 1.089*pow(10.0, 8.0) << " km" << endl; 
cout << left << setw(l) << ear << right << setw(n) << 1.521*pow(10.0, 8.0) << " km" << endl;
cout << left << setw(l) << mar << right << setw(n) << 2.491*pow(10.0, 8.0) << " km" << endl;

return 0; 

}
