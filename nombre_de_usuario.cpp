#include <iostream>
#include <cstring>

int main() {
    int n = 1;
    int intento;
    char usuario[100];

    cout << "¿Cuál es su nombre de usuario?" << std::endl;
    cin.getline(usuario, sizeof(usuario));

    do {
        cout << "Ingrese la contraseña: ";
        cin >> intento;

        if (intento == 1234) {
            cout << "Acceso permitido" << endl;
        } else {
            cout << "Acceso denegado" << endl;
            cout << "Llevas " << n << " intento(s)" << endl;
        }

        n++;
    } while (intento != 1234 && n < 4);

    if (intento == 1234) {
        cout << "¡Bienvenido, " << usuario << "!" << endl;
    }

    return 0;
}
