#include <iostream>
#include <string.h>
#define menor(a, b) ((a) < (b) ? a : b)

using namespace std;

int main(){
	int dir[101], esq[101];
	int n, m, pares;
	char l;
	
	while(cin >> n){
		memset(dir, 0, sizeof(dir));
		memset(esq, 0, sizeof(esq));
		pares = 0;
		
		for(int i = 0; i < n; i++){
			cin >> m >> l;
			if (l == 'E'){
				esq[m]++;
			} else {
				dir[m]++;
			}
		}
		
		for(int i = 30; i <= 60; i++){
			pares += menor(dir[i], esq[i]);
		}
		cout << pares << endl;
	}
	
	return 0;
}