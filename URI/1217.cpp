#include <iostream>
#include <stdio.h>
#include <string>
#include <ctype.h>

using namespace std;

int countWords(string str)
{
	int n_space = 0;
	
	for (int i = 0; i < str.length(); i++){
		if (isspace(str.at(i)))
			n_space++;
	}
	
	return n_space + 1;
}

int main(){
	int n, tot_f = 0;
	float v, tot_v = 0;
	string fruits;
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> v;
		tot_v += v;
		
		getchar();
		getline(cin, fruits);
		
		tot_f += countWords(fruits);
		cout << "day " << i << ": " << countWords(fruits) << " kg" << endl;
	}
	
	printf("%.2f kg by day\n", (float) tot_f / n);
	printf("R$ %.2f by day\n", (float) tot_v / n);
	
}