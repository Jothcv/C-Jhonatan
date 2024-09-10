#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
using namespace std;

struct Cliente
{
    string nit;
    string nombre;
    string Dpi;
    string telefono;
    string email;
    string departamento;
};

class CentroCreativo{
private:
    Cliente clientes[100];
    int totalClinetes=0;

    struct Actividad{
        string nombre;
        float precio;
    }Actividades[10];

public:
    CentroCreativo(){
        InicializarACtividades();
    }

    void InicializarACtividades(){
        Actividades[0]={"natacion ",50.0};
        Actividades[1]={"ciclismo ",30.0};
        Actividades[2]={"bandalismo ",1.00};
        Actividades[3]={"Tiro del barco ",69.0};
        Actividades[4]={"Loteria ",10.0};
        Actividades[5]={"pelea de pavos ",15.0};
        Actividades[6]={"tira a la gorda ",1.00};
        Actividades[7]={"zumba ",19.0};
        Actividades[8]={"Pesca Patitos ",5.00};
        Actividades[9]={"carrera de sacos ",16.00};
        Actividades[10]={"carrera de tortugas ",15.0};
    }

   void registrarCliente() {
        Cliente cliente;
        cout << "Ingrese nit ";
        cin >> cliente.nit;
        cout << "Ingrese nombre ";
        cin.ignore();
        getline(cin, cliente.nombre);
        cout << "Ingrese dpi ";
        cin >> cliente.Dpi;
        cout << "Ingrese telefono ";
        cin >> cliente.telefono;
        cout << "Ingrese email ";
        cin >> cliente.email;
        cout << "Ingrese departamento ";
        cin >> cliente.departamento;

        clientes[totalClinetes] = cliente;
        totalClinetes++;
        cout << "se registro exitosamente causa :v" << endl;
    }
    
    void actualizarCliente() {
        string nit;
        cout << "Ingrese el NIT del cliente a actualizar: ";
        cin >> nit;
        for (int i = 0; i < totalClinetes; i++) {
            if (clientes[i].nit == nit) {
                cout << "ingrea un nuveo nombre para el usuario con el nit de: "<<nit;
                cin.ignore();
                getline(cin, clientes[i].nombre);
                cout << "ingresa un nuevo dpi ";
                cin >> clientes[i].Dpi;
                cout << "ingresa un nuevo telefono ";
                cin >> clientes[i].telefono;
                cout << "ingresa un nuevo email ";
                cin >> clientes[i].email;
                cout << "ingresa un nuevo departamento ";
                cin >> clientes[i].departamento;
            }
        }
        cout << "no se encontro ni un cliente con el nit de: "<<nit << endl;
    }

    void EliminarClientes(){
        string nit;
        cout<<"ingresa el nit del usuario a eliminar: ";
        cin>>nit;
        for (int i = 0; i < totalClinetes; i++)
            if (clientes[i].nit==nit){
                for (int j = 0; j < totalClinetes-1; j++)
                {
                    clientes[j]=clientes[j+1];
                }
                totalClinetes--;
                cout<<"ay ta cliente eliminado exitosamente";
            }
            cout<<"el cliente no fue encotnrado efesota: ";
                
    }

    void ConsultarCliente(){
        string nit;
        cout<<"ingresa el nit del usuario a eliminar: ";
        cin>>nit;
        for (int i = 0; i < totalClinetes; i++){
            if (clientes[i].nit==nit){
                cout<<"nit: "<<clientes[i].nit<<endl;
                cout<<"nombre: "<<clientes[i].nombre<<endl;
                cout<<"dpi: "<<clientes[i].Dpi<<endl;
                cout<<"telefono: "<<clientes[i].telefono<<endl;
                cout<<"email: "<<clientes[i].email<<endl;
                cout<<"departamento "<<clientes[i].departamento<<endl;
            }
        }
        cout<<"cliente no encontrado ";    
    }
    
   void realizarActividad() {
        string nit;
        cout << "ingresa el nit del cliente:  ";
        cin >> nit;

        int indiceCliente = -1;
        for (int i = 0; i < totalClinetes; i++) {
            if (clientes[i].nit == nit) {
                indiceCliente = i;
                break;
            }
        }

        if (indiceCliente == -1) 
        {
            cout << "no se pudo efosta :V" << endl;
            return;
        }

        float total = 0.0;
        int opcion;
        do {
            cout << "Seleccione: " << endl;
            for (int i = 0; i < 10; i++)
             {
                cout << i + 1 << ". " << Actividades[i].nombre << " - Q" << Actividades[i].precio << endl;
            }
            cout << "Ingrese el numero de la actividad  ";
            cin >> opcion;

            if (opcion > 0 && opcion <= 10) {
                total += Actividades[opcion - 1].precio;
                cout << "la actividad se giardo totalmente toal" << total << endl;
            }
        } while (opcion != 0);

        cout << "Total a pagar por el cliente: Q" << total << endl;

        ofstream archivo("transacciones.txt", ios::app);
        if (archivo.is_open()) {
            archivo << "nit del cliente " << clientes[indiceCliente].nit << endl;
            archivo << "nombre del cliente " << clientes[indiceCliente].nombre << endl;
            archivo << "total gastadp: " << total << endl;
            archivo.close();
        } else {
            cout << "eror en elr achivo papu" << endl;
        }
    }
};


float IniciarSesion(){
    string usuario;
    string contrasenia;
    string usuarioGuardado;
    string ContraseniaGuardado;
    cout<<"ingresa usuario a registrar: ";
    cin>>usuario;
    cout<<"ingresa la contraseña: ";
    cin>>contrasenia;

    ifstream archivo("usuario.txt");
    if (archivo.is_open())
    {
        archivo>>usuarioGuardado>>ContraseniaGuardado;
        archivo.close();
    }
    return (usuario==usuarioGuardado && contrasenia==ContraseniaGuardado);
}

void RegistrarUsusrio(){
    string usuario,contrasenia;
    cout<<"ingresa un usuario: ";
    cin>>usuario;
    cout<<"ingresa la contrasenia: ";
    cin>>contrasenia;

}

