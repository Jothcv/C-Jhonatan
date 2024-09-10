#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main(){
    vector<int> vec1(10);//definir el tamaño del vector
    cout<<"la cantidad de elementos del vector es: "<<vec1.size();
    vector<int> vec2{25,15};//cantidad de valores que hay 
    cout<<"prueba de el vector: "<<vec1.size();
    vector<int> vec3(3,5);//3 posisiones y 5 valores
    for (int i = 0; i < vec3.size(); i++)
    {
        cout<<"el tamaño que creo que es el vector es: "<<vec3[i]<<endl;
    }

    vector <int> vec4(vec3);
    for (int i = 0; i < vec4.size(); i++)
    {
        cout<<"creo que este guniona: "<<vec4[i]<<endl;
    }
    
    
}