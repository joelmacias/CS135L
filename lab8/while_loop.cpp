/*
Lab 8 Control Structures (Repetition) - while loop and do while loop

	syntax:
		while (logical expression){
			execute statements until logical expression is false; 
		}

		do {
			execute statements until logical expression is false;
			unlike the while loop, do while will execute at least once
			regardless of the truth value of the logical expression
		} while(logical expression); 

*/

#include<iostream>

using namespace std; 

int main(){
	
	cout <<"Enter an integer greater than 0 or less than or equal to 10" << endl;
	int userInput;
/*
	cin >> userInput;
	// if the user entered an invalid integer then the body of the 
	// loop will be executed until the user enters a valid integer
	while (userInput > 10 || userInput <= 0){
		cout <<"Try again, number must be greater than 0 or less than or equal to 10" << endl; 
		cin >> userInput;		
	}
*/
	// in this example the body of the loop will be exectued at least once, regardless 
	// of the while conditions truth value  
	do {
		cin >> userInput; 
		if( userInput > 10 || userInput <=0){
			cout <<"Try again, number must be greater than 0 or less than or equal to 10" << endl;
		} 
		} while (userInput <= 0 || userInput > 10);

	cout <<"    ";
	int r,c;
	// prints top row of multiplication table
	for (c = 1; c <= userInput; c++){
		if (c == 10){
		cout<<c<<endl;
		}
		else{
		cout << " " << c << " ";
		}
	}
	cout << endl;

	cout << "    ";

	// prints dashed line under top row of multiplication table	
	for (c = 1; c <= userInput; c++){
		cout <<"----";
	}
	cout << endl; 
	
	// outer for loop prints left most column 
	for (r = 1; r <= userInput; r++){
		cout << r << "*  ";
		// inner for loop will cycle through numbers to be multiplied
		for (c = 1; c <= userInput; c++){
			if (r * c < 10) cout << " ";
			cout << r * c << " ";
		}
		cout << endl;
	}

	return 0;
}
