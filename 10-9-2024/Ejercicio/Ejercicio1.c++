#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int main(){
    int ingreso;
    int pedvector;
    cout<<"que cantidad quiere agregar a su vector ";
    cin>>ingreso;
    vector <int> vec1(ingreso);
    for (int i = 0; i < vec1.size(); i++)
    {
        
        cout<<"ingrese el dato del vector: "<<i+1;
        cin>>pedvector;
        vec1.push_back(pedvector);
        
    }
    for (int i = 0; i < vec1.size(); i++)
    {
        cout<<"el  numero de su vector es: "<<vec1[i]<<endl;
    }

    cout<<vec1.front()<<endl;
    cout<<vec1.back()<<endl;
    cout<<vec1.empty();//verifica si el vector esta vacio si esta vacio 1 y si no 0
    
    /*clear limpear un vector */
    /*insert inserta un valor a un vector*/
    /*eraser borra un elemento intermedio */
    /*resize para modificar el tamaño */
}
