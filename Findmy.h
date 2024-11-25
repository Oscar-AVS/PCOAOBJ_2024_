// Código de la clase Findmy la cual es "la página de inicio " del concesionario en donde el usuario ingresa su nombre, contacto y razón de porque busca un auto y tiene relación de composición con la clase Auto.h
// Elaborado por Oscar Alexander Vilchis Soto - A01713207 
// Se modificó el 24/11/2024
// En esta modificación se incluyen herramientas como la plantilla vector  para mejorar el como se maneja el inventario 
#ifndef FINDMY_H
#define FINDMY_H

#include <iostream>
#include <vector>
#include <string>
#include "Auto.h"
#include "Sedan.h"
#include "SUV.h"
#include "Deportivo.h"
#include "Seminuevo.h"

using namespace std;

class FindMy {
private:
    string nombreUsuario;
    string contactoUsuario;
    vector<Auto*> vehiculos;

public:
    FindMy() {}

    void agregarAuto(Auto* autoObj) {
        vehiculos.push_back(autoObj);
    }

    void mostrarVehiculos() const {
        if (vehiculos.empty()) {
            cout << "Lo sentimos, no hay autos disponibles  :(\n";
            return;
        }
        for (size_t i = 0; i < vehiculos.size(); ++i) {
            cout << "Auto " << i + 1 << ":\n";
            vehiculos[i]->mostrarInfo();
            cout << "----------------------\n";
        }
    }

    void interactuarUsuario() {
        cout << "Bienvenido a  tu Concesionario FindMy !!\n";
        cout << "Ingresa tu Nombre completo: ";
        getline(cin, nombreUsuario);
        cout << "Ingresa tu numero celular : ";
        getline(cin, contactoUsuario);

        int opcion;
        cout << "\n¿Que tipo de vehículo estas buscando?\n";
        cout << "1. SUV\n";
        cout << "2. Deportivo\n";
        cout << "3. Sedan\n";
        cout << "4. Seminuevo\n";
        cout << "Ingrese un número del 1-4: ";
        cin >> opcion;

        mostrarInventarioSegunCategoria(opcion);
    }

private:
    void mostrarInventarioSegunCategoria(int categoria) {
        cout << "\nResultados segun busqueda:\n";
        switch (categoria) {
        case 1:
            cout << "Modelos disponibles:\n";
            mostrarPorCategoria<SUV>();
            break;
        case 2:
            cout << "Modelos disponibles:\n";
            mostrarPorCategoria<Deportivo>();
            break;
        case 3:
            cout << "Modelos disponibles:\n";
            mostrarPorCategoria<Sedan>();
            break;
        case 4:
            cout << "Modelos disponibles:\n";
            mostrarPorCategoria<Seminuevo>();
            break;
        default:
            cout << "Opción inválida. :/ \n";
        }
    }

    template <typename T>
    void mostrarPorCategoria() const {
        bool encontrado = false;
        for (const auto& autoObj : vehiculos) {
            if (dynamic_cast<T*>(autoObj)) {
                autoObj->mostrarInfo();
                cout << "----------------------\n";
                encontrado = true;
            }
        }
        if (!encontrado) {
            cout << "No hay vehículos disponibles :(\n";
        }
    }
};

#endif
