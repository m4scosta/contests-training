// n = numero de pizzas do pedido
// tamanho = capacidade da mochila
// t = tempo
// qtd = quantidade de pizzas

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> brinquedo;

int comp(brinquedo a, brinquedo b) {
	return (a.second / a.first) > (b.second / b.first);
}

int main()
{
	int n, t, d, p, k = 0;
	vector<brinquedo> brinquedos;
	
	while((cin >> n >> t) && n)
	{	
		for (int i = 0; i < n; i++){
			cin >> d >> p;
			brinquedos.push_back(make_pair(d, p));
		}
		
		sort(brinquedos.begin(), brinquedos.end(), comp);
		int tempo_total = 0, total_pontos = 0, i = 0;
		
		while(tempo_total <= t && i < n) {
			if (brinquedos[i].first + tempo_total <= t) {
				tempo_total += brinquedos[i].first;
				total_pontos += brinquedos[i].second;
			} else {
				i++;
			}
		}
		
		cout << "Instancia " << ++k << endl << total_pontos << endl << endl;
		
		brinquedos.clear();
	}
}