#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
	int c, n, nt, acima;
	vector<int> notas;
	float media, total;
	
	cin >> c;
	
	while(c--)
	{
		cin >> n;
		acima = 0;
		total = 0;
		media = 0;
		for(int i = 0; i < n; i++){
			cin >> nt;
			notas.push_back(nt);
			total += nt;
		}
		
		media = total / n;

		for(int i = 0; i < n; i++){
			if (notas[i] > media)
				acima++;
		}
		
		printf("%.3f%%\n", ((float)acima / (float)n) * 100);
		
		notas.clear();
	}
}