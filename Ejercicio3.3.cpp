//Ejercicio 3
//Registro de temperaturas minimas y maximas de los 7 dias,
//calculo de temperaturas medias, dia con menor temperatura
//y busqueda de dias con una temperatura maxima especifica.

#include <iostream>
using namespace std;

int main() {

    float minima[7];
    float maxima[7];
    float media[7];

    float menor;
    int diaMenor;

    for (int i = 0; i < 7; i++) {
        cin >> minima[i];
        cin >> maxima[i];

        media[i] = (minima[i] + maxima[i]) / 2;
    }

    for (int i = 0; i < 7; i++) {
        cout << media[i] << endl;
    }

    menor = minima[0];
    diaMenor = 0;

    for (int i = 1; i < 7; i++) {
        if (minima[i] < menor) {
            menor = minima[i];
            diaMenor = i;
        }
    }

    cout << diaMenor + 1 << " " << menor << endl;

    float temperatura;
    cin >> temperatura;

    bool encontrado = false;

    for (int i = 0; i < 7; i++) {
        if (maxima[i] == temperatura) {
            cout << i + 1 << endl;
            encontrado = true;
        }
    }

    if (encontrado == false) {
        cout << "No existe ningun dia" << endl;
    }

    return 0;
}