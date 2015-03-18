#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	
	int n;
	string str;
	
	cin >> n;
	getchar();
	
	while(n--)
	{
		getline(cin, str);
		
		reverse(str.begin(), str.begin() + str.size() / 2);
		reverse(str.begin() + str.size() / 2, str.end());
		
		cout << str << endl;
	}
	
	return 0;
}