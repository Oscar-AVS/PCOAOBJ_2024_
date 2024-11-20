// Código de la clase Findmy la cual es "la página de inicio " del concesionario en donde el usuario ingresa su nombre, contacto y razón de porque busca un auto y tiene relación de composición con la clase Auto.h
// Elaborado por Oscar Alexander Vilchis Soto - A01713207 
#ifndef FINDMY_H
#define FINDMY_H

#include <iostream>
#include <vector>
#include "Deportivo.h"
#include "SUV.h"
#include "Sedan.h"
#include "Auto.h"

using namespace std;

class FindMy {
private:
    vector<Auto*> vehiculos;
    string nombreUsuario;
    string contacto;
    string razonBusqueda;

public:
    // Métodos
    void agregarDeportivo() {
        vehiculos.push_back(new Deportivo("Ferrari", "488 Spider", 2023, 320000, "V8", 670));
    }

    void agregarSUV() {
        vehiculos.push_back(new SUV("Toyota", "RAV4", 2022, 30000, 5, 580, "4x4"));
    }

    void agregarSedan() {
        vehiculos.push_back(new Sedan("Honda", "Accord", 2023, 28000, "Automática", 15.5));
    }

    void mostrarVehiculos() {
        cout << "Lista de Vehículos Disponibles:\n";
        for (size_t i = 0; i < vehiculos.size(); ++i) {
            cout << i + 1 << ". ";
            vehiculos[i]->mostrarInfo();
            cout << "------------------\n";
        }
    }

    void obtenerDatosUsuario() {
        cout << "Ingrese su nombre: ";
        getline(cin, nombreUsuario);
        cout << "Ingrese su contacto: ";
        getline(cin, contacto);
        cout << "Razón de búsqueda: ";
        getline(cin, razonBusqueda);
    }

    void mostrarResumen() {
        cout << "\nResumen del Usuario:\nNombre: " << nombreUsuario
             << "\nContacto: " << contacto
             << "\nRazón: " << razonBusqueda << endl;
    }
};

#endif // FINDMY_H
