#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int s1,s2=0;
    int rango2;
    int rango1;
    cout<<"cuantos numeros deseas ingresar en tu primer rango: ";
    cin>>num1;
    for (int i = 1; i <= num1; i++)
    {
        
        cout<<"ingresa tu numero del rangon 1: ";
        cin>>rango1;
        s1+=rango1;
        cout<<s1<<endl;
    }

    cout<<"cuantos numeros deseas ingresar en tu segundo rango: ";
    cin>>num2;
    for (int j = 1; j <= num2; j++)
    {
        cout<<"ingresa tu numero del rango 2: ";
        cin>>rango2;
        s2+=rango2;
        cout<<s2<<endl;
    }

    if (s1>s2)
    {
        cout<<"el numero mas grande es el primer rango con un rango de: "<<s1;
    }else if (s2>s1)
    {
        cout<<"el numero mas grande es el segundo rango con un rango de: "<<s2;
    }
    else{
        cout<<"los dos son iguales";
    }
}