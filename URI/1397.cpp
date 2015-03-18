#include <iostream>
#define maior(a, b) ((a) == (b) ? -1 : (a) > (b) ? 0 : 1)

using namespace std;

int main(){
	int a, b, n;
	int pts[2];
	
	while ((cin >> n) && n){
		pts[0] = pts[1] = 0;
		for (int i = 0; i < n; i++){
			cin >> a >> b;
			if (maior(a, b) != -1)
				pts[maior(a, b)]++;
		}
		cout << pts[0] << " " << pts[1] << endl;
	}
}