#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  string sheldon, raj, resp;

  cin >> t;

  for (int i = 1; i <= t; i++) {
    cin >> sheldon >> raj;

    if (sheldon == raj) {
      resp = "De novo!";
    } else if (sheldon == "tesoura") {
      if (raj == "papel" || raj == "lagarto") {
        resp = "Bazinga!";
      } else {
        resp = "Raj trapaceou!";
      }
    } else if (sheldon == "papel") {
      if (raj == "pedra" || raj == "Spock") {
        resp = "Bazinga!";
      } else {
        resp = "Raj trapaceou!";
      }
    } else if (sheldon == "pedra") {
      if (raj == "lagarto" || raj == "tesoura") {
        resp = "Bazinga!";
      } else {
        resp = "Raj trapaceou!";
      }
    } else if (sheldon == "lagarto") {
      if (raj == "Spock" || raj == "papel") {
        resp = "Bazinga!";
      } else {
        resp = "Raj trapaceou!";
      }
    } else if (sheldon == "Spock") {
      if (raj == "tesoura" || raj == "pedra") {
        resp = "Bazinga!";
      } else {
        resp = "Raj trapaceou!";
      }
    }

    cout << "Caso #" << i << ": " << resp << endl;
  }

  return 0;
}
