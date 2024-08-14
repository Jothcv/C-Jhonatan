#include <iostream>
using namespace std;

int main(){
    int a = 15, b = 3;
    int suma = a + b;
    int resta = a - b;
    int multiplicacion = a * b;
    int divicion = a / b;
    int residuo = a % b;

    int c = 15;
    c += 5;
    c -= 3;
    c *= 2;
    c /= 4;
    c %= 3;

    bool esMayor = a > b;
    bool esMenor = a < b;
    bool igual = a == b;
    bool noIgual = a != b;
    bool mayorIgual = a >= b;
    bool menorIgual = a <= b;
    bool condicion1 = true;
    bool condicion2 = false;
    bool resultadoAnd = condicion1 && condicion2;
    bool resultadoOr = condicion1 || condicion2;
    bool resultadoNot = !condicion1;

    int contador = 0;
    contador++;
    contador--;

    int x = 5;
    int y = 3;
    int resultadoExprecion = x * (y + 2) - (x + y) / 2;

    cout <<"Operadores aritmeticas:"<<endl;
    cout <<"Suma: "<<suma<<", Resta: "<<resta<<", Multiplicacion: "<<multiplicacion<<endl;
    cout <<"Divicion: "<<divicion<<", Residuo: "<<residuo<<endl;
    
    cout <<"Operadores de asignacion:"<<endl;
    cout <<"C: "<<c<<endl;

    cout <<"\nOperadores de comparacion:"<<endl;
    cout <<"Es Mayor: "<<esMayor<<", Es Menor: "<<esMenor<<", Igual: "<<igual<<endl;

    cout <<"\nOperadores logicos:"<<endl;
    cout <<"Resultado And: "<<resultadoAnd<<", Resultado Or: "<<resultadoOr<<", Resultado Not: "<<resultadoNot<<endl;

    cout <<"\nOperadores de incremento y decremento:"<<endl;
    cout <<"Contador: "<<contador<<endl;

    cout <<"\nExprecion:"<<endl;
    cout <<"Resultado de la exprecion: "<<resultadoExprecion<<endl;

    return 0;
}