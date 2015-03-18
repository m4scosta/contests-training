#include <iostream>
#include <string.h>
#define MAXITENS 200
#define maior(a, b) (a) > (b) ? a : b

using namespace std;

int PD[MAXITENS][MAXITENS];

int mochila(int pesos[], int valores[], int indice, int peso_restante){
    if (indice < 0)
        return 0;

    if (PD[indice][peso_restante])
        return PD[indice][peso_restante];

    int pegou_atual = 0, nao_pegou = 0;
    if (pesos[indice] <= peso_restante) {
        pegou_atual = valores[indice] + mochila(pesos, valores, indice - 1, peso_restante-pesos[indice]);
    }

    nao_pegou = mochila(pesos, valores, indice-1, peso_restante);

    PD[indice][peso_restante] = maior(pegou_atual, nao_pegou);
    return PD[indice][peso_restante];
}

int main()
{
    int n, p, tempos[MAXITENS], quantidades[MAXITENS];

    while(cin >> n && n)
    {
        memset(tempos, 0, sizeof(tempos));
        memset(quantidades, 0, sizeof(quantidades));
        memset(PD, 0, sizeof(PD));

        for (int i = 0; i < n; ++i) {
            cin >> tempos[i] >> quantidades[i];
        }

        cin >> p;

        cout << mochila(quantidades, tempos, n - 1, p) << endl;

    }

    return 0;
}
