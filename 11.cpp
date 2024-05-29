#include<iostream>
using namespace std;
int main(){
    int num[5], numero;
    for (int i =0; i < 5; i++)
    {
        cout<<"digite un numero para la posicion",i;
        cin>>numero;
        num[1]<-numero;   
    }
    for (int i = 0; i < 5 ; i ++)
    {
        cout<<"el dato de la posicion"<<i+1<<"es: "<<"\n";
    }
    return 0;
    
}
