#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float num1,num2,num3,raiz1,raiz2,raiz3,suma;
    cout<<"ingresa un numero para sacarle su raiz ";
    cin>>num1;
    cout<<"ingresa un segundo numero para sacarle su raiz ";
    cin>>num2;
    cout<<"ingresa un tercer numero para sacarle su raiz ";
    cin>>num3;
    raiz1=sqrt(num1);
    raiz2=sqrt(num2);
    raiz3=sqrt(num3);
    suma=raiz1+raiz2+raiz3;
    cout<<"la raiz cuadrada del primer digito es: "<<raiz1<<endl; 
    cout<<"la raiz cuadrada del segundo digito es: "<<raiz2<<endl;
    cout<<"la raiz cuadrada del tercer digito es: "<<raiz3<<endl;
    cout<<"la suma de los 3 es "<<suma<<endl;

    return 0;
}