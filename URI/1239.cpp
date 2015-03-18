#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string str;
	string::iterator it;
	
	int i, b;
	
	while( getline(cin, str) )
	{
		i = b = 0;
		for(it = str.begin(); it != str.end(); ++it){
			if (*it != '_' && *it != '*'){
				cout << *it;
			} else {
				if(*it == '_'){
					if(!i){
						cout << "<i>";
						i = 1;
					} else {
						cout << "</i>";
						i = 0;
					}
				} else {
					if(!b){
						cout << "<b>";
						b = 1;
					} else {
						cout << "</b>";
						b = 0;
					}
				}
			}
		}
		cout << endl;
	}
	
	return 0;
}