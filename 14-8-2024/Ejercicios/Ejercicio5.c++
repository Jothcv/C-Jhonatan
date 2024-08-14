#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    float num1,num2,num3,aprox1,aprox2,aprox3;
    cout<<"ingrese un numero decimal para aproximar "<<endl;
    cin>>num1;
    cout<<"ingrese un segundo numero decimal para aproximar "<<endl;
    cin>>num2;
    cout<<"ingrese un tercer numero decimal para aproximar "<<endl;
    cin>>num3;
    aprox1=roundf(num1);
    aprox2=roundf(num2);
    aprox3=roundf(num3);
    cout<<"el valor "<<num1<<" aproximado es: "<<aprox1<<endl;
    cout<<"el valor "<<num2<<" aproximado es: "<<aprox2<<endl;
    cout<<"el valor "<<num3<<" aproximado es: "<<aprox3<<endl;

    return 0;
}