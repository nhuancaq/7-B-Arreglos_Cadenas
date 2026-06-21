#include <iostream>
using namespace std;

int main() {
    int N;
    int numeros[1000];

    cin >> N;

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