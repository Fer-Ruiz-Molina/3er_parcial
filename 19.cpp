#include <iostream>
using namespace std;

int main() {
    int acum = 0, acum2 = 0;
    int t;

    cout << "Digite el tamaño del vector 1: ";
    cin >> t;

    int vector1[t];

    for (int i = 0; i < t; i++) {
        int num;
        cout << "Digite un número " << i + 1 << ": ";
        cin >> num;
        vector1[i] = num;
        acum += vector1[i];
    }

    cout << "Digite el tamaño del vector 2: ";
    cin >> t;

    int vector2[t];

    for (int i = 0; i < t; i++) {
        int num;
        cout << "Digite un número " << i + 1 << ": ";
        cin >> num;
        vector2[i] = num;
        acum2 += vector2[i];
    }

    int vector3[2];
    vector3[0] = acum + acum2;

    cout << "Resultado total: " << vector3[0] << endl;

    return 0;
}