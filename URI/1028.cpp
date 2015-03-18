#include <iostream>

using namespace std;

int mdc(int a, int b){
	if (b == 0)
		return a;
	return mdc(b, a % b);
}

int main()
{
	int n, a, b;
	cin >> n;
	
	while(n--)
	{
		cin >> a >> b;
		cout << mdc(a, b) << endl;
	}
	
	return 0;
}