#include <iostream>
using namespace std;

int main(){
    int puntos;
    float porcentaje=0,bonificacion;

    cout<<"ingrese los puntos de los empleados:\n";
    cin>>puntos;

    if (puntos==1500)
    {
        porcentaje=0.10;
    }else if(puntos<=3000){
        porcentaje=0.05;
    }else if(puntos<=5000){
        porcentaje=0.10;
    }else if(puntos>5000){
        porcentaje=0.15;
    }
    else{
        porcentaje=0;
    }

    bonificacion=puntos*porcentaje;
    cout<<"la bonificacion es de "<<bonificacion<<"\n";
}