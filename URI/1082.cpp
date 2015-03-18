// exercicio 1082 do URI
#include <stdio.h>
#include <iostream>
#include <string.h>
#define MAX 30

using namespace std;

int mat[MAX][MAX];
int vis[MAX];

int v, a;

void dfs(int ini, int cor){
	int i;
	vis[ini] = cor;
	
	for(i = 0; i <= v; i++){
		if(mat[ini][i] && vis[i] == 0){
			dfs(i, cor);
		}
	}
}

int main(){
	int c, n, i, j, cor;
	char x, y;
	
	cin >> n;
	
	for(c = 1; c <= n; c++)
	{
		cor = 1;
		memset(mat, 0, sizeof(mat));
		memset(vis, 0, sizeof(vis));
		
		cin >> v >> a;
	
		for(i = 0; i < a; i++){
			cin >> x >> y;
			mat[x-'a'][y-'a'] = 1;
			mat[y-'a'][x-'a'] = 1;
		}
		
		for(i = 0; i < v; i++)
		{
			if (!vis[i]){
				dfs(i, cor);
				cor++;
			}
		}
		
		cout << "Case #" << c << ':' << endl;
		for (j = 1; j < cor; j++){
			for(i = 0; i < v; i++){
				if(vis[i] == j){
					x = i + 'a';
					cout << x << ',';
				}
			}
			cout << endl;
		}
		
		cout << cor - 1 << " connected components" << endl << endl;
	}
}