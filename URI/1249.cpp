#include <iostream>
#include <string>
#include <string.h>

using namespace std;

char Rot13(char c, char *alf){
	int i;
	for (i = 0; i < 26; i++){
		if(alf[i] == c)
			return alf[(i + 13) % 26];
	}
}

int main(){
	char min[30];
	char mai[30];
	char i;
	int j;
	string str;
	string::iterator it;
	

	for (j = 0, i = 'a'; j < 26; j++, i++){
		min[j] = i;
	}

	for (i = 'A', j = 0; i <= 'Z'; i++, j++){
		mai[j] = i;
	}
	
	
	while(getline(cin, str)){
		for(it = str.begin(); it != str.end(); ++it){
			if (isalpha(*it)){
				if(*it < 'a')
					*it = Rot13(*it, mai);
				else
					*it = Rot13(*it, min);
			}
		}
		cout << str << endl;
	}
	
}