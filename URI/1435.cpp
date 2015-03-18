#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int n, i, j, k;
	int matriz[110][110];
	
	cin >> n;
	while (n){
		k = 1;
		
		while(k <= n){
			for (i = 0; i < n; i++){
				for (j = 0; j < n; j++){
					if (i == k-1 || j == k-1 || i == n-k || j == n-k){
						matriz[i][j] = n - k + 1;
					}
				}
			}
			k++;
		}
		
		for (i = 0; i < n; i++){
			for (j = 0; j < n; j++){
				if (j){
					printf(" ");
				}
				printf("%3d", matriz[i][j]);
			}
			cout << endl;
		}
		
		cin >> n;
		cout << endl;
	}
}