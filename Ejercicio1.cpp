//Ejercicio Reverso de Arreglos y Cadenas

#include <iostream>
using namespace std;

int main() {
    int N;
    int numeros[1000];

    cout << "Ingresar la cantidad de numeros: ";
    cin >> N;

    cout << "Ingresar los numeros: ";
    for (int i = 0; i < N; i++) {
        cin >> numeros[i];
    }

    for (int i = N - 1; i >= 0; i--) {
        cout << numeros[i];

        if (i != 0) {
            cout << " ";
        }
    }

    return 0;
}