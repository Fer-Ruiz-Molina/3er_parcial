#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Digite el número de posiciones: ";
    cin >> n;

    string personas[n];

    for (int i = 0; i < n; i++) {
        string nombre;
        cout << "Digite un nombre para la posición " << i << ": ";
        cin >> nombre;
        personas[i] = nombre;
    }

    cout << "Los datos en el arreglo son:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "El dato en la posición " << i << " es: " << personas[i] << endl;
    }

    return 0;
}
