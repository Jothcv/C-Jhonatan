#include <iostream>
using namespace std;

int main(){
    int nota1,nota2,nota3;
    float promedio;

    cout<<"ingrese su primera nota: ";
    cin>>nota1;
    cout<<"ingrese su segunda nota: ";
    cin>>nota2;
    cout<<"ingrese su tercer nota: ";
    cin>>nota3;

    promedio=(nota1+nota2+nota3)/3;
    

    if (promedio>=75)
    {
        cout<<"Excelente su promedio es de: "<<promedio;
    }
    else if (promedio>=60 && promedio<75)
    {
        cout<<"muy bien su promedio es de: "<<promedio;
    }
    else{
        cout<<"reprobado su promedio es de: "<<promedio;
    }
    
    


}