#include <iostream>
using namespace std;

int main() {
    int acum = 0;
    int t;

    cout << "Digite el tamaño del vector (arreglo): ";
    cin >> t;

    int vector[t];

    for (int i = 0; i < t; i++) {
        int num;
        cout << "Digite un número: ";
        cin >> num;
        vector[i] = num;
        acum += vector[i];
    }

    for (int i = 0; i < t; i++) {
        cout << "El valor en la posición " << i << " es: " << vector[i] << endl;
    }

    cout << "La suma de los elementos del vector es: " << acum << endl;

    return 0;
}