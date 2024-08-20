#include <iostream>
using namespace std;

int main(){
    int num1,num2,num3,num4,num5;
    int mayor,menor;
    cout<<"Ingresa tu numero para ver si es mayor o menor ";
    cin>>num1;
    cout<<"Ingresa tu segundo numero para ver si es mayor o menor ";
    cin>>num2;
    cout<<"Ingresa tu tercer numero para ver si es mayor o menor ";
    cin>>num3;
    cout<<"Ingresa tu cuerto numero para ver si es mayor o menor ";
    cin>>num4;
    cout<<"Ingresa tu cuerto numero para ver si es mayor o menor ";
    cin>>num5;

    mayor=menor=num1;

    if(num2>mayor){
        mayor=num2;
    }
    if(num3>mayor){
        mayor=num3;
    }
    if(num4>mayor){
        mayor=num4;
    }
    if(num5>mayor){
        mayor=num5;
    }


    if (num2<menor)
    {
        menor=num2;
    }
    if (num3<menor)
    {
        menor=num3;
    }
    if (num4<menor)
    {
        menor=num4;
    }
    if (num5<menor)
    {
        menor=num5;
    }
    
    cout<<"el mayor es: "<<mayor<<endl;
    cout<<"le menor es: "<<menor;
    
    
    



    
}