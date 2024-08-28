#include <iostream>
using namespace std;

int suma(int a, int b);
int resta(int a, int b);
int multi(int a, int b);
int div(int a, int b);

int main(){
int num1, num2, res1, res2, res3, res4;
cout <<"Ingrese dos numeros: "<<endl;
cin >>num1>>num2;
res1 = suma(num1, num2);
res2 = resta(num1, num2);
res3 = multi(num1, num2);
res4 = div(num1, num2);
return 0;
}

int suma(int a, int b){
int resultado = a + b;
cout <<"El resultado de la suma es: "<<resultado<<endl;
return resultado;
}

int resta(int a, int b){
int resultado = a - b;
cout <<"El resultado de la resta es: "<<resultado<<endl;
return resultado;
}

int multi(int a, int b){
int resultado = a * b;
cout <<"El resultado de la multiplicacion es: "<<resultado<<endl;
return resultado;
}

int div(int a, int b){
int resultado = a / b;
cout <<"El resultado de la divicion es: "<<resultado<<endl;
return resultado;
}