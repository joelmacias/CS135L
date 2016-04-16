#include<iostream>
#include<string>
#include<cctype> 

using namespace std;

string format(string& line);

int main(){
	string line; 
	string formattedString;
    
	getline(cin,line);
	while(cin){
		formattedString = format(line); 
		getline(cin,line);
		cout << formattedString + '\n';
		formattedString = ""; 
	}

	return 0; 
}

string format(string& line){

	string formattedString; 
	for(int i = 0; i < line.length(); i++){
		if(i == 0){
			formattedString += toupper(line[0]);
		}	

		else if(line[i] == ' ' && line[i+1] != ' '){
			formattedString += ' '; 
			formattedString += toupper(line[i+1]);
			i++;
		} 
		else if(line[i] != ' '){
			formattedString += tolower(line[i]);
		}
	}
	return formattedString;
}
