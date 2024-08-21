#include <iostream>
using namespace std;

int main(){
    int mes;
    cout<<"ingrese el valor entre el 1 -12: ";
    cin>>mes;

    if (mes>0 && mes <13)
        switch (mes)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout<<"El mes tiene 31 dias.\n";
            break;
        case 4: case 6: case 9: case 11:
            cout<<"el mes tiene 30 dias: \n";
            break;
        case 2:
            cout<<"el mes tiene 28 o 29 dias";
            break;
        }
    else
        cout<<"el valor introdusido no es valido:";
    
}