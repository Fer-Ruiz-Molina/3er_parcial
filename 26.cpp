#include<iostream>
#include "stdafx.h"
#define filas 4 
#define columnas 3
using namespace std;
int main()
{
    int tabla[filas][columnas];
    int sumas[columnas];
    for(int fila = 0 ; filas; fila++)
    {
        for (int columna = 0; columna < columnas; columna++)
        {
            cout<<"digite el valor para la tabla: ";
            cin>>tabla[fila][columna;]
        }
    }
    for (int columna = 0; columna < columnas; columna++)
    {
        suma[columna]=0;
        for (int fila = 0; fila < filas; fila++)
        {
            suma[columna]+=tabla[fila][columna];
        }
    }
    int mayor_suma=suma[0];
    for (int columna= 1;columna < columnas; columna++)
    {
        if(suma[columna]>mayor_suma)
        {
            mayor_suma=suma[columna];
        }
    }
    cout<<"la mayor suma de columnas es: "<<mayor_suma;
    return 0;
}