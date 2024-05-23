#include <iostream>
using namespace std;

int main()
{
    int num, base, altura, BaseMayor;
    float area;
    cout << "CALCULO DE AREAS\n================\n";
    cout << "1 Calcular area de un triangulo\n2 Calcular area de un trapecio\n3 Calcular area de un rectangulo\n";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "Para imprimir el area ingrese la base: ";
        cin >> base;
        cout << "ahora ingrese la altura: ";
        cin >> altura;
        area = base * altura / 2.0;
        cout << "El area del triangulo es: " << area;
        break;
    case 2:
        cout << "Ingrese la base mayor para calcular el area: ";
        cin >> BaseMayor;
        cout << "Para imprimir el area ingrese la base: ";
        cin >> base;
        cout << "ahora ingrese la altura: ";
        cin >> altura;
        area = (BaseMayor + base) * altura / 2.0;
        cout << "El area del trapecio es: " << area;
        break;
    case 3:
        cout << "Ingrese la base mayor para calcular el area: ";
        cin >> BaseMayor;
        cout << "Para imprimir el area ingrese la base: ";
        cin >> base;
        area = BaseMayor * base;
        cout << "El area del rectangulo es: " << area;
        break;
    default:
        cout << "No se ha seleccionado una figura válida";
        break;
    }
    return 0;
}