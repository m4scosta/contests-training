#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct contador{
       int cont;
       int num;
};
typedef struct contador Cont;

void criaCont(Cont* k, int x){
     k->cont = 0;
     k->num = x;
}

int main(int argc, char *argv[])
{
    vector<int> vet;
    int n, ocr, i;
    vector<int>::iterator it, it2;
    Cont* k;
    cin >> n;
    for(n; n > 0; n--){
           cin >> i;
           vet.push_back(i);
    }
    
    sort(vet.begin(), vet.end());
    
    ocr = 0;
    for(it = vet.begin(); it != vet.end(); ++it){
           ocr = 0;
           for(it2 = it;it2 != vet.end() && *it2 == *it; ++it2)
                   ocr++;
           cout << *it << " aparece " << ocr << " vez(es)"<< endl;
           it = --it2;
    }
    return 0;
}
