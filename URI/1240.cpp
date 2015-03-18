#include <iostream>
using namespace std;

int main()
{
	int n;
	long long int a, b;
	
	cin >> n;
	
	while(n--)
	{
		int div = 10;
		cin >> a >> b;
		if (a == b){
			cout << "encaixa";
		} else {
			if (a > b){
				while( div < b){
					div *= 10;
				}
				if (a % div == b % div){
					cout << "encaixa";
				} else {
					cout << "nao encaixa";
				}
			} else {
				cout << "nao encaixa";
			}
		}
		cout << endl;
	}
	
	return 0;
}
