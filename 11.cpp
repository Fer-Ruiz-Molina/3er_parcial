#include <iostream>
using namespace std;

int main() {
    int num[5], numero;
    for (int i = 0; i < 5; i++) {
        cout << "Digite un número para la posición " << i << ": ";
        cin >> numero;
        num[i] = numero;
    }

    for (int i = 0; i < 5; i++) {
        cout << "El dato de la posición " << i + 1 << " es: " << num[i] << "\n";
    }

    return 0;
}
