#include <iostream>
int main() {
    int acum = 0;
    int f, c;

    std::cout << "Digite el numero de filas: ";
    std::cin >> f;

    std::cout << "Digite el numero de columnas: ";
    std::cin >> c;

    int matriz[f][c];

    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            std::cout << "Digite dato para la fila " << i+1 << " columna " << j+1 << ": ";
            std::cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            std::cout << matriz[i][j] << " ";
            if (j == 0) {
                acum += matriz[i][j];
            }
        }
        std::cout << std::endl;
    }

    std::cout << "Todos los elementos de la columna 1 suman un total de: " << acum;

    return 0;
}