#include <iostream>
using namespace std;

int main(){
    int list1[50],columnas,filas;

    cout<<"Ingrese el numero de filas: ";
    cin>>filas;

    cout<<"ingrese el numero de columnas: ";
    cin>>columnas;


    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; i++)
        {
            cout<<"Numero de filas:"<<i+1<<"numero de columnas"<<j+1<<endl;
            cin>>list1[i,j];
        }
    }
}