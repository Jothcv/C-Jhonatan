#include <iostream>
using namespace std;

int main(){
    int mes;
    cout <<"Ingrese un valor entre 1-12:";
    cin >>mes;

    if(mes > 0 && mes < 13)
        if(mes == 1)
            cout <<"El mes tiene 31 dias.\n";
        else if(mes == 2)
            cout <<"El mes tiene 28 o 29 dias.\n";
        else if(mes == 3)
            cout <<"El mes tiene 31 dias.\n";
        else if(mes == 4)
            cout <<"El mes tiene 30 dias.\n";
        else if(mes == 5)
            cout <<"El mes tiene 31 dias.\n";
        else if(mes == 6)
            cout <<"El mes tiene 30 dias.\n";
        else if(mes == 7)
            cout <<"El mes tiene 31 dias.\n";
        else if(mes == 8)
            cout <<"El mes tiene 31 dias.\n";
        else if(mes == 9)
            cout <<"El mes tiene 30 dias.\n";
        else if(mes == 10)
            cout <<"El mes tiene 31 dias.\n";
        else if(mes == 11)
            cout <<"El mes tiene 30 dias.\n";
        else if(mes == 12)
            cout <<"El mes tiene 31 dias.\n";
    else
        cout <<"El valor ingresado no es valido.\n";
}