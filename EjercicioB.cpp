#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string palabra;

    cout << "Ingresar cantidad de palabras: ";
    cin >> N;

    cout << "Ingresar las palabras:" << endl;

    for (int i = 0; i < N; i++) {
        cin >> palabra;

        bool palindromo = true;

        int inicio = 0;
        int fin = palabra.length() - 1;

        while (inicio < fin) {
            if (palabra[inicio] != palabra[fin]) {
                palindromo = false;
                break;
            }
            inicio++;
            fin--;
        }

        if (palindromo) {
            cout << "P" << endl;
        } else {
            cout << "NP" << endl;
        }
    }

    return 0;
}