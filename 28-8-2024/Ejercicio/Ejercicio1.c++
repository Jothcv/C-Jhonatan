#include <iostream>
using namespace std;

void ingresarDatos(float &sueldoBase, int &nivel);
int calcularDescuentos(float sueldoBase, int nivel);
float calcularBonificacion(float sueldoBase, int nivel);
float mostrarResultados(float sueldoBase, float descuentos, float bonificacion);

void ingresarDatos(float &sueldoBase, int &nivel) {
    do {
        cout << "Ingrese el sueldo base (mínimo Q3227.82): ";
        cin >> sueldoBase;
    } while (sueldoBase < 3227.82);

    do {
        cout << "Ingrese el nivel del empleado (0-3): ";
        cin >> nivel;
    } while (nivel < 0 || nivel > 3);
}

int calcularDescuentos(float sueldoBase, int nivel) {
    float descuentoISR = 0;
    float DescuentoSeguro = 0;
    float descuentoIGSS = sueldoBase * 0.0483;

    if (sueldoBase >= 4000) {
        descuentoISR = sueldoBase * 0.05;
    }

    if (nivel == 2 || nivel == 3) {
        DescuentoSeguro = sueldoBase * 0.05;
    }
    return descuentoIGSS + descuentoISR + DescuentoSeguro;
}

float calcularBonificacion(float sueldoBase, int nivel) {
    
    if (nivel == 0) {
        return 250.0;
    } else if (nivel == 1) {
        return sueldoBase * 0.075;
    } else if (nivel == 2) {
        return sueldoBase * 0.15;
    } else {
        return sueldoBase * 0.22;
    }
}

float mostrarResultados(float sueldoBase, float descuentos, float bonificacion) {
    float sueldoFinal = sueldoBase - descuentos + bonificacion;
    cout << "\nResultados:"<<endl;
    cout << "Descuentos: Q" << descuentos << endl;
    cout << "Bonificación: Q" << bonificacion << endl;
    cout << "sueldo final Q" << sueldoFinal << endl;
    return sueldoFinal;
}


int main() {
    float sumaFinal = 0;

    for (int i = 1; i <= 5; i++) {
        float sueldoBase;
        int nivel;

        cout << "\nEmpleado #" << i << endl;

        ingresarDatos(sueldoBase, nivel);

        float descuentos = calcularDescuentos(sueldoBase, nivel);
        float bonificacion = calcularBonificacion(sueldoBase, nivel);

        float sueldoFinal = mostrarResultados(sueldoBase, descuentos, bonificacion);
        sumaFinal += sueldoFinal;
    }
    cout << "El pago final de planilla es: Q" << sumaFinal << endl;
    return 0;
}