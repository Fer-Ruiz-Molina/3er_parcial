#include <iostream>
using namespace std;

int main() {
    int matriz[2][2] = {{10, 20}, {30, 40}};

    cout << "El dato que hay en la fila 1 y columna 1 es: " << matriz[0][0] << endl;
    cout << "El dato que hay en la fila 1 y columna 2 es: " << matriz[0][1] << endl;
    cout << "El dato que hay en la fila 2 y columna 1 es: " << matriz[1][0] << endl;
    cout << "El dato que hay en la fila 2 y columna 2 es: " << matriz[1][1] << endl;

    return 0;
}