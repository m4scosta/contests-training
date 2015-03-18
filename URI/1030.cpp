#include <vector>
#include <iostream>

using namespace std;

int main() {
	vector<int> lista;
	int n, s, c;
	
	cin >> c;
	
	for (int i = 1; i <= c; i++) {
		cin >> n >> s;
		int k = 0, j = 0, r = 0;
		
		for (int j = 1; j <= n; j++) {
			lista.push_back(j); 
		}
		
		while(r < lista.size() - 1) {
			j = j % lista.size();
			for(; j < lista.size(); j++) {
				if (lista[j] == 0)
					continue;
				k++;
				if (k == s) {
					lista[j] = 0;
					k = 0;
					r++;
				}
			}
		}
		
		for (k = 0; k < lista.size(); k++) {
			if (lista[k]) {
				j = lista[k];
				break;
			}
		}	
		cout << "Case " << i << ": " << j << endl;
		lista.clear();
	}
	return 0;
}