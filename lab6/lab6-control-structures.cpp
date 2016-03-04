/*
Lab 6 - Control Structures - if, else, else if, switch 

syntax - if one-way selection - if expression is true, statement will be executed
	if (expression)
		statement; 

syntax - if else two-way selction - if expression is true,firstStatment will be executed.
							        if expression is false, secondStatement will be executed.
	if(expression) 
		firstStatement; 
	else
		secondStatement;

syntax - if else if two-way selection - if expressionA is true,firstStatment will be executed.
							            if expressionB is false, secondStatement will be executed. 
	if(expressionA)
		firstStatement;
	else if(expressionB) 
		secondStatement;

syntax - switch muli-way selection - Allows selection among multiple sections of code, depending on 
									 the value of an integral expression. 
									 Integral types: https://msdn.microsoft.com/en-us/library/cc953fe1.aspx 

									 Body of switch has a series of case labels, and an option default label.
									 Default label can appear only once, cases may not repeat. 

	switch (integral expression){
		case value1:{
			// do stuff
			break;
		} 
		case value2:{
			// do more stuff
			break;
		}
		case value3:
		case value4:{
			// do some more stuff
			break;
		}
		case value5:{
			// do stuff
			// notice there is no break statement here, so execution will fall through
		}
		case value6:{
			// do stuff
			break;
		}
		default:{
			// if no other case is excuted, then this will be executed 
		}
}

*/ 

#include<iostream>
using namespace std;

int main(){

cout<<"If you want to tell me your age enter 'a'\nIf you want to tell me the day of the week enter 'b'\nIf you want to enter two numbers type 'c'\n";
char option;
cin >> option;

switch(option){

case 'a':{
	cout << "How old are you?" << endl; 
	int x;
	cin >> x; 
	switch(x >= 21){

		case 1:{
			cout << "You are old enough to drink, and go to war!" << endl;
			break;
		} 
		default:{
			cout << "You are not old enough to drink." << endl;
			if(x >= 18){
			cout << "But at least you can go to war!" << endl;
			}	
			else{
			cout << "You are also not old enough to go to war. More time to code! " << endl;
			}
			break;
			}
		}
	break;
}

case 'b':{
	cout<<"\n\nWhat day is it today?\nMonday? Enter 1\nTuesday? Enter 2\nWednesday? Enter 3\nThursday? Enter 4\nFriday? Enter 5\nSaturday? Enter 6\nSunday? Enter 7\n"<<endl;
	int day;
	cin >> day;

	switch(day){
		case 1: 
		case 2: 
		case 3: 
		case 4: 
		case 5: {
			cout << "Its a weekday!" << endl;
			break; 
			} 
		case 6:
		case 7: {
			cout << "Its a weekend!" << endl; 
			break; 
			}
		default:{
			cout << "That was not an option :( " << endl; 
			break;
			}
		}
	break;
}

case 'c':{
	int numb1, numb2;
    cout << "Enter two integers to check\n";
    cin >> numb1 >> numb2; 
    
	// check if numbers are equal 
	if(numb1==numb2){
		cout << numb1 << " == " << numb2 << endl;
	}
	else{
		// check if numb1 is greater than number 2 
    		if(numb1>numb2){ 
      		cout << numb1 << " > " << numb2 << endl;
			} 
    		else{ 
     		cout << numb2 << " > " << numb1 << endl;
			}	 
		}
	break;
	}	

default:{
	cout <<"That wasn't an option :("<<endl;
	}
}

return 0;
}



