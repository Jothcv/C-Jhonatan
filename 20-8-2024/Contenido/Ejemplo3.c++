#include <iostream>
using namespace std;

int main(){
    int numero;
    cout<<"ingresa 1 numero: "<<endl;
    cin>> numero;
    if (numero>=0 && numero<=9)
    {
        cout<<"El numero ingresado es un digito "<<endl;
    }
    else
    {
        cout<<"El valor ingresado no es un digito "<<endl;
    }
    
}