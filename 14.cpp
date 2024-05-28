#include <iostream>
using namespace std;

int main() {
    int f, c;
    cout << "Digite el numero de filas: ";
    cin >> f;
    cout << "Digite el numero de columnas: ";
    cin >> c;
    int matriz[f][c];

    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            int numero;
            cout << "Digite dato para la fila " << i+1 << " columna " << j+1 << ": ";
            cin >> numero;
            matriz[i][j] = numero;
        }
    }

    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Calculando la suma de los elementos de la columna 1
    int acum = 0;
    for (int i = 0; i < f; i++) {
        acum += matriz[i][0]; // Sumar el elemento en la primera columna
    }
    cout << "Todos los elementos de la columna 1 suman un total de: " << acum;

    return 0;
}