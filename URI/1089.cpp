#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, fl, k;
	vector<int> loop;
	vector<int> aux;
	
	while((cin >> n) && n)
	{
		int picos = 0;
		for (int i = 0; i < n; i++) {
			cin >> k;
			loop.push_back(k);
		}
		
		for (int i = 1; i <= n; i++) {
			
			if (loop[i % n] > loop[i-1 % n])
				aux.push_back(1);
			else if (loop[i % n] == loop[i-1 % n])
				aux.push_back(0);
			else
				aux.push_back(-1);

		}
		
		
		for (int i = 1; i <= n; i++) {
			if (aux[i % n] != aux[i-1])
				picos++;
		}
		
		cout << picos << endl;
		loop.clear();
		aux.clear();
	}
	return 0;
}