#include <iostream>
using namespace std;

int blobs(float c){
	if (c <= 1)
		return 0;
	return 1 + blobs(c / 2);
}

int main()
{
	int n;
	float c;
	
	cin >> n;
	
	while(n--){
		cin >> c;
		cout << blobs(c) << " dias" << endl;
	}
	return 0;
}
