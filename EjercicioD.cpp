#include <iostream>
using namespace std;

int main() {
    int vasos, canicas;

    cout << "Ingresar cantidad de vasos y canicas: ";
    cin >> vasos >> canicas;

    int cantidad[101] = {0};

    cout << "Ingresar el vaso donde cayo cada canica:" << endl;

    for (int i = 0; i < canicas; i++) {
        int vaso;
        cin >> vaso;
        cantidad[vaso]++;
    }

    cout << "Cantidad de canicas por vaso:" << endl;

    for (int i = 1; i <= vasos; i++) {
        cout << cantidad[i] << endl;
    }

    return 0;
}