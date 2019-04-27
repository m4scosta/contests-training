#include <iostream>

using namespace std;

int main() {
    int tentativas;
    float mais_rapido, tempo;

    while (cin >> tentativas) {
      mais_rapido = 12;

      for (int i = 0; i < tentativas; i++) {
        cin >> tempo;
        if (tempo < mais_rapido) {
          mais_rapido = tempo;
        }
      }

      cout << mais_rapido << endl;
    }

    return 0;
}
