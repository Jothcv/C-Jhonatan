#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    int Opcion=0;
    cout<<"ingresa la opcion que vas a ejecutar";
    cin>>Opcion;

    switch(Opcion)
    {
        case 1:
            cout<<"ha seleciionado la opcion 1";
            break;
        case 2:
            cout<<"usted ha seleccionado la opcion 2";
            break;
        case 3:
            cout<<"usted ha seleccionado la opcion 3";
            break;
        default:
            cout<<"usted ha seleccionado la opcion incorrecta";
    }
}