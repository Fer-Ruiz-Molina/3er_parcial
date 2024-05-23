#include <iostream>
using namespace std;

int main()
{
    int carta;
    cout << "Que carta salio? ";
    cin >> carta;

    if (carta >= 2 && carta <= 9)
    {
        cout << carta << " no es ninguna figura y tampoco es un As" << endl;
    }
    else if (carta == 1)
    {
        cout << carta << " es un As" << endl;
    }
    else if (carta == 10)
    {
        cout << carta << " es una Sota" << endl;
    }
    else if (carta == 11)
    {
        cout << carta << " es un caballo" << endl;
    }
    else if (carta == 12)
    {
        cout << carta << " es un Rey" << endl;
    }
    else if (carta >= 13)
    {
        cout << carta << " no es ninguna carta de la baraja" << endl;
    }

    return 0;
}