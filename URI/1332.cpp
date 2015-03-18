#include <iostream>
#include <string>

using namespace std;

int dif_one(string str){
	int d = 0;
	
	if (str == "one") return 1;
	
	if (str[0] != 'o') d++;
	if (str[1] != 'n') d++;
	if (str[2] != 'e') d++;
	
	return d == 1 ? 1 : 0;
}


int main(){
	
	int n;
	string str;
	
	cin >> n;
	while(n--){
		cin >> str;
		
		if(str.length() > 3){
			cout << "3" << endl;
		} else {
			if (dif_one(str)){
				cout << "1" << endl;
			} else {
				cout << "2" << endl;
			}
		}
	}
	
	return 0;
}