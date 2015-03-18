#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int n, d;
	string cifra;
	string::iterator it;
	
	cin >> n;
	
	while(n--){
		cin >> cifra >> d;
		
		for(it = cifra.begin(); it != cifra.end(); ++it){
			if(*it - 'A' >= d)
				*it = *it - d;
			else
				*it = 'Z' - ('A' - (*it - d)) + 1;
		}
		
		cout << cifra << endl;
	}
	
	return 0;
}
