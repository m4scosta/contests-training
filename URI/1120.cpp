#include <iostream>
#include <algorithm>

using namespace std;

string trimZeros(string str)
{
	int ini = str.find_first_not_of('0');
	
	if(ini == -1) return str;
	string res(str.begin()+ini, str.end());
	
	return res;
}

int main(){
	
	char n;
	string str, res;
	string::iterator it;
	
	while((cin >> n >> str) && (n && str != "0")){

		for(it = str.begin(); it != str.end(); ++it){
			if(*it != n){
				res += *it;
			}
		}
		
		
		if (trimZeros(res).empty()){
			cout << "0" << endl;
		} else {
			if(trimZeros(res).at(0) == '0'){
				cout << '0' << endl;
			} else {
				cout << trimZeros(res) << endl;
			}
		}
		res.clear();
	}
	
	return 0;
}