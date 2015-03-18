#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int perguntas[1100];
	int n, k, p, i, num;
	
	while(cin >> n >> k){
		if (!n && !k ) break;
		
		memset(perguntas, 0, sizeof(perguntas));
		num = 0;
		
		for(i = 0; i < n; i++){
			cin >> p;
			perguntas[p]++;
		}
		
		for(i = 1; i <= n; i++){
			if(perguntas[i] >= k)
				num++;
		}
		cout << num << endl;
	}
}