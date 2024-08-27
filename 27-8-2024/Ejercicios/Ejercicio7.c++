#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cout <<"Ingrese tus numetos "<<endl;
    cin >>n1>>n2;

    if(n1 < n2){
        while (n1 <= n2)
        {
            if(n1 % 2 == 0){
                cout <<"los pares son:  "<<n1<<endl;
                n1+=2;
            }
            else{
                n1+=1;
            }
        }
    }
    else{
        cout <<"el numero no puede ser menor "<<endl;
    }
    
}