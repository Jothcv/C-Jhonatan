#include <iostream>
using namespace std;

int main(){
    int Opcion;
    float libra,onzas,yardas,metros,cm,litros,vasos;

    cout<<"ingrese que quiere convertir:(1/2/3)\n";
    cin>>Opcion;

    if (Opcion>0 && Opcion<3)
        switch (Opcion)
        {
        case 1:
            cout<<"ingrese su numero en onzas para convertirlos a libras: ";
            cin>>onzas;
            libra=onzas/16;
            cout<<onzas<< "a libras es:" <<libra;
            break;
        case 2:
            cout<<"ingrese tu numero en yardas para convertir yardas a metros: ";
            cin>>yardas;
            metros=yardas*0.91;
            cout<<yardas <<"a metros es: "<<metros;
        case 3:
            cout<<"ingresa tu numero de vasos para convertirlos a litros";
            cin>>vasos;
            litros=vasos/4;
            cout<<vasos<<" a litros es:"<<litros;
        default:
            cout<<"aparte de haver mas opciones lo que estas haciendo no es valido";
            break;
        }
    else
        cout<<"Opcion no valida";
    

}