#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
	
	string str1, str2, res;
	string::iterator it1, it2;
	int i, n;
	char c;
	
	cin >> n;
	getchar();
	
	while(n--){
		cin >> str1 >> str2;
		for(it1 = str1.begin(), it2 = str2.begin(); it1 != str1.end() && it2 != str2.end(); ++it1, ++it2){ 
			res.push_back(*it1);
			res.push_back(*it2);
		}
		
		for(; it1 != str1.end(); it1++)
			res.push_back(*it1);
		
		for(; it2 != str2.end(); it2++)
			res.push_back(*it2);
		
		cout << res << endl;
		res.clear();
	}
	
	return 0;
}