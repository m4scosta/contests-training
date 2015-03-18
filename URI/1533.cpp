#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int maior, seg, n, k, i;
	vector<int> susp;
	
	while((cin >> n) && n)
	{
		maior = 0;
		seg = 0;
		for (i = 0; i < n; i++)
		{
			cin >> k;
			susp.push_back(k);
			if (k >= maior)
			{
				seg = maior;
				maior = k;
			} else if (k > seg) {
				seg = k;
			}
		}
		
		if (maior == seg)
		{
			int j = 0;	
			for (i = 0; i < n; i++)
			{
				if (susp[i] == maior){
					j++;
					if (j == 2) {
						cout << i+1 << endl;
						break;
					}
				}
			}
		} else {
			for (i = 0; i < n; i++)
			{
				if (susp[i] == seg){
					cout << i+1 << endl;
					break;
				}
			}
		}
		susp.clear();
	}
	return 0;
}