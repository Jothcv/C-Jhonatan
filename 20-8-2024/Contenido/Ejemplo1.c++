#include <iostream>
using namespace std;

int main(){
    int num1=10,num2=10,resultado,valor;
    resultado=num1+num2;
    cout<<"el valor del numero 1 es 10 "<<endl;
    cout<<"el valor del numero 2 es 20 "<<endl;
    cout<<"ingresa el vlaor de la suma: "<<endl;
    cin>>valor;
    if (valor==resultado)
    {
        cout<<"la suma es correcta";
    }
    else
    {
        cout<<"la suma es incorrecta";
    }
    
}