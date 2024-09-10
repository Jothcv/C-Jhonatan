#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

// Estructura para los clientes
struct Cliente {
    string nit;
    string nombre;
    string dpi;
    string telefono;
    string correo;
    string departamento;
};

// Clase para el manejo de clientes y actividades
class CentroRecreativo {
private:
    Cliente clientes[100];
    int totalClientes = 0;

    struct Actividad {
        string nombre;
        float precio;
    } actividades[10];

public:
    CentroRecreativo() {
        inicializarActividades();
    }

    void inicializarActividades() {
        actividades[0] = {"Natación", 50.0};
        actividades[1] = {"Ciclismo", 30.0};
        actividades[2] = {"Senderismo", 40.0};
        actividades[3] = {"Tiro con arco", 20.0};
        actividades[4] = {"Escalada", 60.0};
        actividades[5] = {"Yoga", 25.0};
        actividades[6] = {"Paddleboarding", 45.0};
        actividades[7] = {"Kayak", 55.0};
        actividades[8] = {"Zumba", 35.0};
        actividades[9] = {"Danza", 40.0};
    }

    // Funciones para manejar clientes
    void registrarCliente() {
        Cliente cliente;
        cout << "Ingrese NIT: ";
        cin >> cliente.nit;
        cout << "Ingrese Nombre: ";
        cin.ignore();
        getline(cin, cliente.nombre);
        cout << "Ingrese DPI: ";
        cin >> cliente.dpi;
        cout << "Ingrese Teléfono: ";
        cin >> cliente.telefono;
        cout << "Ingrese Correo: ";
        cin >> cliente.correo;
        cout << "Ingrese Departamento: ";
        cin >> cliente.departamento;

        clientes[totalClientes] = cliente;
        totalClientes++;
        cout << "Cliente registrado exitosamente." << endl;
    }

    void actualizarCliente() {
        string nit;
        cout << "Ingrese el NIT del cliente a actualizar: ";
        cin >> nit;
        for (int i = 0; i < totalClientes; i++) {
            if (clientes[i].nit == nit) {
                cout << "Actualizando datos del cliente con NIT " << nit << endl;
                cout << "Ingrese Nuevo Nombre: ";
                cin.ignore();
                getline(cin, clientes[i].nombre);
                cout << "Ingrese Nuevo DPI: ";
                cin >> clientes[i].dpi;
                cout << "Ingrese Nuevo Teléfono: ";
                cin >> clientes[i].telefono;
                cout << "Ingrese Nuevo Correo: ";
                cin >> clientes[i].correo;
                cout << "Ingrese Nuevo Departamento: ";
                cin >> clientes[i].departamento;
                cout << "Cliente actualizado exitosamente." << endl;
                return;
            }
        }
        cout << "Cliente no encontrado." << endl;
    }

    void eliminarCliente() {
        string nit;
        cout << "Ingrese el NIT del cliente a eliminar: ";
        cin >> nit;
        for (int i = 0; i < totalClientes; i++) {
            if (clientes[i].nit == nit) {
                for (int j = i; j < totalClientes - 1; j++) {
                    clientes[j] = clientes[j + 1];
                }
                totalClientes--;
                cout << "Cliente eliminado exitosamente." << endl;
                return;
            }
        }
        cout << "Cliente no encontrado." << endl;
    }

    void consultarCliente() {
        string nit;
        cout << "Ingrese el NIT del cliente a consultar: ";
        cin >> nit;
        for (int i = 0; i < totalClientes; i++) {
            if (clientes[i].nit == nit) {
                cout << "NIT: " << clientes[i].nit << endl;
                cout << "Nombre: " << clientes[i].nombre << endl;
                cout << "DPI: " << clientes[i].dpi << endl;
                cout << "Teléfono: " << clientes[i].telefono << endl;
                cout << "Correo: " << clientes[i].correo << endl;
                cout << "Departamento: " << clientes[i].departamento << endl;
                return;
            }
        }
        cout << "Cliente no encontrado." << endl;
    }

    void realizarActividad() {
        string nit;
        cout << "Ingrese el NIT del cliente: ";
        cin >> nit;

        int indiceCliente = -1;
        for (int i = 0; i < totalClientes; i++) {
            if (clientes[i].nit == nit) {
                indiceCliente = i;
                break;
            }
        }

        if (indiceCliente == -1) {
            cout << "Cliente no registrado." << endl;
            return;
        }

        float total = 0.0;
        int opcion;
        do {
            cout << "Seleccione una actividad:" << endl;
            for (int i = 0; i < 10; i++) {
                cout << i + 1 << ". " << actividades[i].nombre << " - Q" << actividades[i].precio << endl;
            }
            cout << "Ingrese el número de la actividad (0 para terminar): ";
            cin >> opcion;

            if (opcion > 0 && opcion <= 10) {
                total += actividades[opcion - 1].precio;
                cout << "Actividad agregada. Total acumulado: Q" << total << endl;
            }
        } while (opcion != 0);

        cout << "Total a pagar por el cliente: Q" << total << endl;

        ofstream archivo("transacciones.txt", ios::app);
        if (archivo.is_open()) {
            archivo << "NIT Cliente: " << clientes[indiceCliente].nit << endl;
            archivo << "Nombre Cliente: " << clientes[indiceCliente].nombre << endl;
            archivo << "Total Gastado: Q" << total << endl;
            archivo << "----------------------------------------" << endl;
            archivo.close();
        } else {
            cout << "Error al guardar la transacción." << endl;
        }
    }
};

bool iniciarSesion() {
    string usuario, contrasena;
    cout << "Ingrese usuario: ";
    cin >> usuario;
    cout << "Ingrese contraseña: ";
    cin >> contrasena;

    string usuarioGuardado, contrasenaGuardada;
    ifstream archivo("usuarios.txt");
    if (archivo.is_open()) {
        archivo >> usuarioGuardado >> contrasenaGuardada;
        archivo.close();
    }

    return (usuario == usuarioGuardado && contrasena == contrasenaGuardada);
}

void registrarUsuario() {
    string usuario, contrasena;
    cout << "Ingrese un usuario: ";
    cin >> usuario;
    cout << "Ingrese una contraseña: ";
    cin >> contrasena;

    ofstream archivo("usuarios.txt");
    if (archivo.is_open()) {
        archivo << usuario << " " << contrasena << endl;
        archivo.close();
        cout << "Usuario registrado exitosamente." << endl;
    } else {
        cout << "Error al registrar el usuario." << endl;
    }
}

int main() {
    CentroRecreativo centro;
    int opcion;

    registrarUsuario();

    if (!iniciarSesion()) {
        cout << "Usuario o contraseña incorrectos." << endl;
        return 0;
    }

    do {
        cout << "Menú principal:" << endl;
        cout << "1. Clientes" << endl;
        cout << "2. Actividades" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                int opcionCliente;
                cout << "1. Registrar Cliente" << endl;
                cout << "2. Actualizar Cliente" << endl;
                cout << "3. Eliminar Cliente" << endl;
                cout << "4. Consultar Cliente" << endl;
                cout << "Ingrese su opción: ";
                cin >> opcionCliente;

                switch (opcionCliente) {
                    case 1: centro.registrarCliente(); break;
                    case 2: centro.actualizarCliente(); break;
                    case 3: centro.eliminarCliente(); break;
                    case 4: centro.consultarCliente(); break;
                    default: cout << "Opción no válida." << endl;
                }
                break;
            case 2:
                centro.realizarActividad();
                break;
            case 3:
                cout << "Gracias por utilizar el sistema." << endl;
                break;
            default:
                cout << "Opción no válida." << endl;
        }
    } while (opcion != 3);

    return 0;
}
