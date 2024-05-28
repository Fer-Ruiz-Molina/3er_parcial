#include <iostream>
using namespace std;

int main() {
    int cont = 0;
    int p;
    cout << "Digite el número de posiciones (tamaño): ";
    cin >> p;

    int num[p];

    for (int i = 0; i < p; i++) {
        int numero;
        cout << "Digite número " << i+1 << ": ";
        cin >> numero;
        num[i] = numero;
    }

    for (int i = 0; i < p; i++) {
        cout << "Los números ingresados son: " << num[i] << endl;
        if (num[i] > 0) {
            cont++;
        }
    }

    cout << "Hay " << cont << " números positivos" << endl;

    return 0;
}