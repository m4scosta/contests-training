// exercicio 1076 do URI
#include <iostream>
#include <string.h>
#define MAX 100

using namespace std;

int mat[MAX][MAX];
int vis[MAX];

int v, a;

void dfs(int ini){
	int i;
	vis[ini] = 1;
	
	for(i = 0; i <= v; i++){
		if(mat[ini][i] && vis[i] == 0){
			dfs(i);
		}
	}
}

int main(){
	int n, x, y, i, j, start, linhas;
	
	cin >> n;
	
	while(n--)
	{
		linhas = 0;
		memset(mat, 0, sizeof(mat));
		memset(vis, 0, sizeof(vis));
		linhas = 0;
		
		cin >> start >> v >> a;
		
		for(i = 0; i < a; i++){
			cin >> x >> y;
			mat[x][y] = 1;
			mat[y][x] = 1;
		}
		
		dfs(start);
		
		for(i = 0; i < v; i++){
			if(vis[i])
				linhas++;
		}
		cout << (linhas - 1) * 2 << endl;
	}
}