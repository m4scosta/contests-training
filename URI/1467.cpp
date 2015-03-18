#include <iostream>

using namespace std;

int main(){
	int a, b, c;
	
	while(cin >> a >> b >> c){
		
		if (a == b && b == c){
			cout << "*";
		} else if (a != b && b == c){
			cout << "A";
		} else if (b != a && a == c){
			cout << "B";
		} else if (c != a && a == b){
			cout << "C";
		}
		cout << endl;
	}
}