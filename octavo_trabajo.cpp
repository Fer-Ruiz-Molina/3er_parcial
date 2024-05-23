#include <iostream>
using namespace std;
int main ()
{
    int i;
    int N[10];
    int FN;
    int Mayor;
    int Menor;
    i=0;
    while (i<10)
    {
        i++;
        cout<<"introduzca el numero:\n ";
        cin>>N[i];
        FN=FN+N[i];
        if (Mayor<N[i])
        {
            Mayor=N[i];
        }
        if (Menor>N[i])
        {
            Menor=N[i];
        }
    }
    cout<<"La suma es de "<< FN <<"\n";
    cout<<"El mayor es: "<< Mayor <<"\n";
    cout<<"el menor es: "<< Menor;
    return 0;
}