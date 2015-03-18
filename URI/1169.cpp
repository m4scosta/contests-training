#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
	unsigned long long int soma, g = 12, kg = 1000;
	int n, x, i;
	
	cin >> n;
	
	while(n--)
	{
		cin >> x;
		if (x == 64){
			cout << "1537228672809129 kg" << endl;
			continue;
		}
		
		soma = 1;
		for(i = 0; i < x; i++){
			soma *= 2;
		}
		cout << (soma / g / kg) << " kg" << endl;
	}
	
	return 0;
}