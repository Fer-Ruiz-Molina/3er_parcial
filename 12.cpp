#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int matriz[3][3];

    // Llenar la matriz con números aleatorios
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 10 + 1;
        }
    }

    // Mostrar la matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}