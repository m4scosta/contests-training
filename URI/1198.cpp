#include <iostream>

#define abs(a, b) ((a) > (b) ? (a) - (b) : (b) - (a))

using namespace std;

int main()
{
	long long a, b;
	
	while (cin >> a >> b){
		cout << abs(a, b) << endl;
	}
	
	return 0;
}
