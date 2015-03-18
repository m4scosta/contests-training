#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int n;
	int letters[255];
	
	cin >> n;
	getchar();
	
	while(n--) {
		memset(letters, 0, sizeof(letters));
		string phrase, word, res = "";
		getline(cin, phrase);
		int maior = 0;
		
		stringstream ss(phrase);
		
		while(ss >> word) {
			res += word[0];
		}
		
		cout << res << endl;
	}

	return 0;
}