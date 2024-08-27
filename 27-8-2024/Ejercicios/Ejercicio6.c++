#include <iostream>
using namespace std;

int main(){
    int num,i=1,suma=0;
    int neg;
    cout<<"ingrese cuantos numeros quieres ingresar: ";
    cin>>num;

    while (i<=num)
    {
        cout << "ingresa tu numero "<<i<<": ";
        cin>>neg;
        if (neg>0)
        {
            suma+=neg;
        }
        else{
            cout<<"no es positvo no cuenta "<<endl;
        }
        i++;
        
    }
    cout<<"la suma es: "<<suma;
    
}