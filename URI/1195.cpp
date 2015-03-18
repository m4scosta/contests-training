#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct node {
	int info;
	struct node* dir;
	struct node* esq;
} node;

node* novo_no(int i)
{
	node* novo = (node*) malloc(sizeof(node));
	novo->info = i;
	novo->dir = NULL;
	novo->esq = NULL;
	return novo;
}

void add(node* no, int i)
{
	if (i > no->info){
		if (no->dir == NULL){
			no->dir = novo_no(i);
		} else {
			add(no->dir, i);
		}
	} else {
		if (no->esq == NULL){
			no->esq = novo_no(i);
		} else {
			add(no->esq, i);
		}
	}		
}

void ler_INF(node* no) 
{
	if (no != NULL) {
		ler_INF(no->esq);
		cout << " " << no->info;
		ler_INF(no->dir);
	}
}

void ler_PRE(node* no) 
{
	if (no != NULL) {
		cout << " " << no->info;
		ler_PRE(no->esq);
		ler_PRE(no->dir);
	}
}

void ler_POS(node* no) 
{
	if (no != NULL) {
		ler_POS(no->esq);
		ler_POS(no->dir);
		cout << " " << no->info;
	}
}

void free_arv(node* no) {
	if (no->dir != NULL)
		free_arv(no->dir);
	
	if (no->esq != NULL)
		free_arv(no->esq);

	free(no);
}

int main()
{
	int c, n, r;
	cin >> c;
	
	for (int i = 1; i <= c; i++) {
		cin >> n;
		cin >> r;
		node* raiz = novo_no(r);
		
		for (int j = 1; j < n; j++) {
			cin >> r;
			add(raiz, r);
		}
		
		cout << "Case " << i << ":" << endl;
		
		cout << "Pre.:";
		ler_PRE(raiz);
		cout << endl;
		
		cout << "In..:";
		ler_INF(raiz);
		cout << endl;
		
		cout << "Post:";
		ler_POS(raiz);
		cout << endl << endl;
		
		free_arv(raiz);
	}
	return 0;
}