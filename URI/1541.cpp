#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int a, b, c, l;
	double t;
	
	while((cin >> a) && a){
		cin >> b >> c;
		
		t = (a * b * 100) / c;
		cout << trunc(sqrt(t)) << endl;
	}
}