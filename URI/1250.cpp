#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() 
{
	int n, t, a;
	string pulos;
	vector<int> tiros;

	cin >> n;

	for (int c = 1; c <= n; c++)
	{
		int acertos = 0;
		cin >> t;
		
		for (int i = 0; i < t; i++){
			cin >> a;
			tiros.push_back(a);
		}

		cin >> pulos;

		for (int i = 0; i < t; i++){
			if ((pulos[i] == 'S' && tiros[i] <= 2) || (pulos[i] == 'J' && tiros[i] > 2))
				acertos++;
		}
		
		cout << acertos << endl;
		
		tiros.clear();
		pulos.clear();

	}

	return 0;
}