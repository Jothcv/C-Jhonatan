#include <iostream>
using namespace std;

int main(){
    int opcion;
    double cantidad, resultado;

    cout << "Seleccione la conversion deseada:\n";
    cout << "4. Convertir pies a kilometros\n";
    cout << "5. Convertir litros a galones\n";
    cout << "6. Convertir kilogramos a libras\n";
    cout << "Ingrese su opcion: ";
    cin >> opcion;

    if (opcion>0 && opcion<3)
    {
        switch (opcion)
        {
        case 1:
            cout<<"ingresa tu numero en pies para convertirlo a kilometros: ";
            cin>>cantidad;
            resultado=cantidad/3280;
            cout<<cantidad<<" a kilometros es: "<<resultado;
            break;
        case 2:
            cout<<"ingresa tu numero en litros para convertirlos a galones ";
            cin>>cantidad;
            resultado=cantidad/3.78;
            cout<<cantidad<<" a galones es: "<<resultado;
        case 3:
            cout<<"ingresa tu numero en kilogramos pra convertilos a libras: ";
            cin>>cantidad;
            resultado=cantidad*2.20;
            cout<<cantidad<< "a libras es: "<<resultado;
        default:
            cout<<"aparte de haver mas opciones lo que estas haciendo no es valido";
            break;
        }
    }
    else{
        cout<<"esa opcion es invalida: ";
    }
    
}