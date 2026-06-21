#include <iostream>
using namespace std;

int main() {
    int P, n;

    cout << "Ingresar cantidad de profesores: ";
    cin >> P;

    cout << "Ingresar cantidad de alumnos: ";
    cin >> n;

    int frecuencia[101] = {0};

    cout << "Ingresar profesores favoritos: ";
    for (int i = 0; i < n; i++) {
        int F;
        cin >> F;
        frecuencia[F]++;
    }

    cout << "Tabla de frecuencias:" << endl;

    for (int i = 1; i <= P; i++) {
        cout << i << "-" << frecuencia[i] << endl;
    }

    return 0;
}