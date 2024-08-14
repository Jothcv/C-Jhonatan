#include <iostream>
#include <string>

using namespace std;

int main(){
    int edad=25;
    double salario=1500.25;
    char letra = 'x';
    bool asCierto=false;

    //Tipos de enteros
    short enteroCorto=10;
    long EnteroLargo=100000;
    unsigned int enteroSingSigno=5;

    //Tipos de punto flotante
    float altura=1.75;
    long double pi=3.14169265;

    //Tipos de caracteres 
    wchar_t caracterAncho=L'A'; 

    //Otros tipos
    string cadena="hola sigma";

    //Mostrar los valores de las variables
    cout<<"edad: "<<edad<<endl;
    cout<<"salarop: "<<salario<<endl;
    cout<<"letra: "<<letra<<endl;
    cout<<"es Cierto: "<<asCierto<<endl;

    cout<<"enteroCorto: "<<enteroCorto<<endl;
    cout<<"enteroLargo: "<<EnteroLargo<<endl;
    cout<<"entero sin signo: "<<enteroSingSigno<<endl;

    cout<<"altura: "<<altura<<endl;
    cout<<"pi: "<<pi<<endl;
    
    cout<<"caracterAnchi: "<<caracterAncho<<endl;

    cout<<"cadena: "<<cadena<<endl;

    return 0;
}