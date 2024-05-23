#include <iostream>
using namespace std;

int main() {
    int carta;
    cout << "¿Qué carta es? ";
    cin >> carta;
    switch (carta) {
        case 1:
            cout << "Es un As";
            break;
        case 10:
            cout << "Es una sota";
            break;
        case 11:
            cout << "Es un caballo";
            break;
        case 12:
            cout << "Es un rey";
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            cout << "No es ni una figura ni un As";
            break;
        default:
            cout << "No es de la baraja";
            break;
    }
    return 0;
}