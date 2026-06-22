#include <iostream>
using namespace std;

int main() {
    int vasos, canicas;

    cin >> vasos >> canicas;

    int cantidad[101] = {0};

    for (int i = 0; i < canicas; i++) {
        int vaso;
        cin >> vaso;
        cantidad[vaso]++;
    }

    for (int i = 1; i <= vasos; i++) {
        cout << cantidad[i] << endl;
    }

    return 0;
}
