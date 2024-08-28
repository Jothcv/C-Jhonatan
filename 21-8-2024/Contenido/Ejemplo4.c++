#include <iostream>
using namespace std;

int main(){
    int mes;
    cout<<"ingrese un numero entre 1-12\n";
    cin>>mes;
    if (mes>0 && mes<13)
        if(mes==1 || mes == 3 || mes==5 || mes == 7 ||
           mes== 8 || mes ==10 || mes==12)
            cout<<"el mes tiene 31 dias\n";
        else if (mes==2)
            cout<<"el mes tiene 28 o 29 dias";
        else if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
            cout<<"el mes tiene 30 dias";
    else
        cout<<"no es valido tu numero";
}