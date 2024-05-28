#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Digite el número de países: ";
    cin >> n;

    string paises[n];

    for (int i = 0; i < n; i++) {
        cout << "Digite país " << i+1 << ": ";
        cin >> paises[i];
    }

    int pos;
    cout << "Digite la posición: ";
    cin >> pos;

    cout << "El país que hay en la posición " << pos << " es: " << paises[pos-1] << endl;

    return 0;
}