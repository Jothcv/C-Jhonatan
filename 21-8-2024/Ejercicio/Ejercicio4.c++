#include <iostream>
using namespace std;

int  main(){
    float salario,pagoExtra=0;
    int nivel,HorasExtras;
    cout<<" Ingresa tu salario base \n";
    cin>>salario;
    cout<<" Ingresa el nive de los trabajadores 1/2/3\n";
    cin>>nivel;
    cout<<"ingresa la cantidad de horas extras: \n";
    cin>>HorasExtras;

    if (HorasExtras>20)
    {
        HorasExtras=20;
    }

    switch (nivel)
    {
    case 1:
        pagoExtra=HorasExtras*100;
        break;
    case 2:
        pagoExtra=HorasExtras*75;
        break;
    case 3:
        pagoExtra=HorasExtras*50;
        break;
    default:
        break;
    }

    salario+=pagoExtra;
    
    cout<<"el nuevo salario con las horas es de Q."<<salario<<endl;
}