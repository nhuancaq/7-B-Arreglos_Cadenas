#include <iostream>
using namespace std;

int main() {
    string texto;

    getline(cin, texto);    //getline(cin, texto) para leer una línea completa de texto, incluyendo los espacios

    string letras = "";

    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            letras += texto[i];
        }
    }

  

    return 0;
}