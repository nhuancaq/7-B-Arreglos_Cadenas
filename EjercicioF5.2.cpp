#include <iostream>
using namespace std;

int main() {
    string texto;

    getline(cin, texto);

    string letras = "";

    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            letras += texto[i];
        }
    }

    for (int i = 0; i < letras.length() - 1; i++) {
        for (int j = 0; j < letras.length() - i - 1; j++) {
            if (letras[j] > letras[j + 1]) {
                char aux = letras[j];
                letras[j] = letras[j + 1];
                letras[j + 1] = aux;
            }
        }
    }



    return 0;
}