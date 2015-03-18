#include <iostream>
#include <string.h>
#define MAX 25

using namespace std;

int V, E;
int grafo[MAX][MAX];
int visitados[MAX];

void pathR(int v, int i) {
    visitados[v] = 1;
    
    for (int j = 0; j < V; j++) {
        if (grafo[v][j]) {
            if (visitados[j] == 0) {
                for (int k = 1; k <= i; k++) {
                    cout << "  ";
                }
                cout << v << "-" << j << " pathR(G," << j << ")" << endl;
                pathR(j, i+1);
            } else {
                for (int k = 1; k <= i; k++) {
                    cout << "  ";
                }
                cout << v << "-" << j << endl;
            }
            
        }
    }
}

int deg(int v) {
    int i = 0;
    for (int j = 0; j < V; j++) {
        if (grafo[v][j]) i++;
    }
    return i;
}

int main()
{
    int n, a, b;
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        memset(grafo, 0, sizeof(grafo));
        memset(visitados, 0, sizeof(visitados));
        
        cin >> V >> E;
        
        for (int j = 0; j < E; j++) {
            cin >> a >> b;
            grafo[a][b] = 1;
        }
        
        cout << "Caso " << i << ":" << endl;
        
        for(int k = 0; k < V; k++) {
            if (!visitados[k]) {
                pathR(k, 1);
                if (deg(k))
                    cout << endl;
            }
        }
    }
    
    return 0;
}
