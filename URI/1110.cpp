#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	queue<int> cartas;
	vector<int> rem;
	
	while((cin >> n) && n)
	{
		for(int i = 1; i <= n; i++)
			cartas.push(i);
		
		int tam = 0;
		do {
			rem.push_back(cartas.front());
			cartas.pop();
			
			cartas.push(cartas.front());
			cartas.pop();
			tam = cartas.size();
		} while(tam >= 2);
		
		cout << "Discarded cards: ";
		for(int i = 0; i < rem.size(); i++){
			cout << rem[i];
			if(i < rem.size()-1) 
				cout << ", ";
		}
		cout << endl;
		
		cout << "Remaining card: " << cartas.front() << endl;
		
		cartas.pop();
		rem.clear();
	}
	
	return 0;
}