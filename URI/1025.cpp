#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int PesquisaBinaria ( vector<int> array, int chave)
{
	 int N = array.size();
	 
     int inf = 0; //Limite inferior      (o primeiro elemento do vetor em C é zero          )
     int sup = N-1; //Limite superior    (termina em um número a menos 0 à 9 são 10 numeros )
     int meio;
     while (inf <= sup) 
     {
          meio = inf + (sup-inf)/2;
          if (chave == array[meio]){
          	while(array[meio-1] == chave){
          		meio--;
          	}
          		return meio;
          }
          else if (chave < array[meio])
               sup = meio-1;
          else
               inf = meio+1;
     }
     return -1;   // não encontrado
}


int main()
{
	int n, q, k, m, i, enc, caso = 1;
	vector<int> nums;
	
	while((cin >> n >> q) && (n || q))
	{
		for(int i = 0; i < n; i++){
			cin >> k;
			nums.push_back(k);
		}
		
		sort(nums.begin(), nums.end());
		
		cout << "CASE# " << caso++ << ":" << endl;
		for(int i = 0; i < q; i++){
			cin >> m;
			
			k = PesquisaBinaria(nums, m);
			
			if (k != -1){
				cout << m << " found at " << k+1 << endl;
			} else {
				cout << m << " not found" << endl;
			}
		}
		
		nums.clear();
	}
	
	return 0;
}