#include <iostream>
#include <cctype> 

using namespace std;

bool con(char x);
bool vowel(char y); 

int main()
{
  int consonants = 0; //consonant counter
  int vowels = 0;     //vowel counter
  char inputch;       //current input character

  cin >> inputch;
  while (cin)
    {
      if(con(inputch)) 
	consonants++;
      if(vowel(inputch)) 
	vowels++;
      cin >> inputch;
    }

  cout << "There were " << consonants 
       << " consonants found in the file." << endl;
  cout << "There were " << vowels 
       << " lowercase vowels found in the file." << endl;
  return 0;
}

bool con(char x){

	if(isalpha(x)){
		x = tolower(x); 
		if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
			return false;
		}
		else{
			return true;
		}
	}
	
	return false;
}

bool vowel(char x){

		if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
			return true;
		}
		else{
			return false;
		}
}
