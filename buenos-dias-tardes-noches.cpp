#include <iostream>
using namespace std;

int main()
{
    int hrs;
    cout << "Hola, por favor introduzca la hora: ";
    cin >> hrs;
    if (hrs < 11)
    {
        cout << "Buenos días" << endl;
    }
    else if (hrs >= 11 && hrs < 19)
    {
        cout << "Buenas tardes" << endl;
    }
    else
    {
        cout << "Buenas noches" << endl;
    }
    return 0;
}
