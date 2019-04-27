#include <bits/stdc++.h>

using namespace std;

bool ganha(string a, string b) {
  return (a == "papel" && b == "pedra") ||
         (a == "pedra" && b == "tesoura") ||
         (a == "tesoura" && b == "papel");
}

int main() {
  string dodo, leo, pepper;

  while (cin >> dodo >> leo >> pepper) {
    if (ganha(dodo, leo) && ganha(dodo, pepper)) {
      cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
    } else if (ganha(leo, dodo) && ganha(leo, pepper)) {
      cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
    } else if (ganha(pepper, dodo) && ganha(pepper, leo)) {
      cout << "Urano perdeu algo muito precioso..." << endl;
    } else {
      cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
    }
  }

  return 0;
}
