#include <iostream>
using namespace std;
int main(){
     int Opcion;
     double celsius,kelvin;

     cout<<"este programa convierte temperaturas\n";
     cout<<"eliga una opcion\n";
     cout<<"1. De grados ceslsius  a grados kelvin.\n";
     cout<<"2. de grados kelvin a grados celsius\n";
     cout<<"introduce que quieres decir (1/2)\n";
     cin>>Opcion;
     switch (Opcion)
     {
     case 1:
        cout<<" introdusca la temperatura en grados celcius ";
        cin>>celsius;
        if (celsius>=-273)
        {
            kelvin=celsius+273;
            cout<<celsius<< " grados C son "<<kelvin<<  " grados k,\n";
        }
        else
            cout<<"temperatura por debajo del cero absoluto\n";
        break;
    case 2:
        cout<<"introdusca la temperatura en grados kelvin:\n";
        cin>>kelvin;
        if (kelvin>=0)
        {
            celsius=kelvin-273;
            cout<<kelvin<< "grados K son "<<celsius<< "grados c.\n";
        }
        else
            cout<<"temperatura por debajo del cero absoluto.\n";
            break;
     default:
        cout<<"la opcion escogida es invalida";
        break;
     }
}