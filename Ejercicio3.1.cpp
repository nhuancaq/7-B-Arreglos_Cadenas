//Ejercicio 3
//Queremos guardar la temperatura mínima y máxima de los siete días de una semana. Realice un programa que de la siguiente información:
//La temperatura media de cada día
//El día con menor temperatura.
//Se lee una temperatura por teclado y se muestran los días cuya temperatura máxima coincide con ella. si no existe ningún día se muestra un mensaje de información.

#include <iostream>
using namespace std;

int main() {

    float minima[7];
    float maxima[7];
    float media[7];

    float menor;
    int diaMenor;

    cout << "Ingresar temperaturas minimas y maximas de los 7 dias:" << endl;

    for (int i = 0; i < 7; i++) {
        cout << "Dia " << i + 1 << endl;

        cout << "Temperatura minima: ";
        cin >> minima[i];

        cout << "Temperatura maxima: ";
        cin >> maxima[i];

        media[i] = (minima[i] + maxima[i]) / 2;
    }

    cout << endl;
    cout << "Temperatura media de cada dia:" << endl;

    for (int i = 0; i < 7; i++) {
        cout << "Dia " << i + 1 << ": " << media[i] << endl;
    }

    menor = minima[0];
    diaMenor = 0;

    for (int i = 1; i < 7; i++) {
        if (minima[i] < menor) {
            menor = minima[i];
            diaMenor = i;
        }
    }

    cout << endl;
    cout << "El dia con menor temperatura es el dia "
         << diaMenor + 1 << " con " << menor << " grados." << endl;


    return 0;
}