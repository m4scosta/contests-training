#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n, r, k;
	int ret[10100];
	while(cin >> n >> r){
		memset(ret, 0, sizeof(ret));
		for (int i = 0; i < r; i++){
			cin >> k;
			ret[k] = 1;
		}
		
		if (n == r){
			cout << "*" << endl;
		} else {
			int ant = 0;
			for(int i = 1; i <= n; i++){
				if (!ret[i]){
					cout << i << " ";
				}
			}
			cout << endl;
		}
	}
}