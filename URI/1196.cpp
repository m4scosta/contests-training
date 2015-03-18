#include <iostream>
#include <string>

using namespace std;

int main()
{
	string corr = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	string in;
	
	while(getline(cin, in)) {
		for (int i = 0; i < in.size(); i++){
			if (corr.find(in[i]) != string::npos)
				cout << corr[corr.find(in[i]) - 1];
			else
				cout << in[i];
		}
		cout << endl;
	}
	
	return 0;
}
