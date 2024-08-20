#include <iostream>
using namespace std;

int main(){
    char Letra;
    cout<<"ingresa una letrota: "<<endl;
    cin>>Letra;
    if (Letra=='a'|| Letra=='e' || Letra=='i' || Letra=='o' || Letra=='u')
    {
        cout<< "La letra ingresada es un vocal "<<endl;
    }
    else
    {
        cout<<"la letra ingresada es una consonante "<<endl;
    }
    
}