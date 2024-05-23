#include<iostream>
using namespace std;
int main(){
    int unidad, subtotal, precio;
    cout<<"cantidad de unidades: ";
    cin>>unidad;
    cout<<"precio: ";
    cin>>precio;
    subtotal=unidad*precio;
    cout<<"\nel subtotal es: "<<subtotal;
    return 0;
}