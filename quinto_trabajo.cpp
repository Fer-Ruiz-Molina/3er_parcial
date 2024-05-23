#include <iostream>
using namespace std;

int main() {
    float producto, unidad, subtotal, precio, descuento, iva, total;
    cout << "Ingrese la cantidad de unidades: ";
    cin >> unidad;
    cout << "Ingrese el precio: ";
    cin >> precio;
    subtotal = unidad * precio;

    if (subtotal < 1000) {
        descuento = subtotal * 0;
    } else if (subtotal > 1000 && subtotal <= 2000) {
        descuento = subtotal * 0.1;
        cout << "El descuento es de: " << descuento << endl;
    } else if (subtotal > 2000 && subtotal <= 3000) {
        descuento = subtotal * 0.2;
        cout << "El descuento es de: " << descuento << endl;
    } else if (subtotal > 3000) {
        descuento = subtotal * 0.3;
    }

    iva = subtotal * 0.16;
    total = subtotal - descuento + iva;

    cout << "El total a pagar es de: " << total;

    return 0;
}