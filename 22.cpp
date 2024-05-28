#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Digite el tamaño del arreglo: ";
    cin >> n;

    int num[n];

    for (int i = 0; i < n; i++) {
        int numero;
        cout << "Digite un número para la posición " << i+1 << ": ";
        cin >> numero;
        num[i] = numero;
    }

    cout << "Los datos en el arreglo son:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "El dato en la posición " << i+1 << " es: " << num[i] << endl;
    }

    return 0;
}