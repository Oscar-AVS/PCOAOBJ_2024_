// Este es el progrma para la clase Inventario  en donde se implementan todos los vehiculos disponibles en el concesionario, en este código se almacenan como una tipo biblioteca actualmente 8 carros ( 2por cada clase) para que el usuario pueda ver las opciones disponibles 
// Creado por: Oscar Alexander Vilchis Soto (A01713207)
// Creado el 24/11/2024
#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <vector>
#include "Auto.h"
#include "Sedan.h"
#include "SUV.h"
#include "Deportivo.h"
#include "Seminuevo.h"

using namespace std;

class Inventario {
private:
    vector<Auto*> inventario;

public:
    Inventario() {
        inventario.push_back(new Sedan("Toyota", "Camry", 2020, 4, "Automática", 15.5, 475000));
        inventario.push_back(new Sedan("Honda", "Civic", 2022, 4, "Manual", 18.2, 430000));
        inventario.push_back(new SUV("Jeep", "Commander ", 2025, "4x4", 7, 1760.0, 735000));
        inventario.push_back(new SUV("Ford", "Explorer", 2020, "4x2", 7, 500.0, 32000));
        inventario.push_back(new Deportivo("Audi", "R8", 2023, 330, "V10", 610, 2500000));
        inventario.push_back(new Deportivo("Porsche ", "911 turbo s", 2021, 320, "V10", 610, 2700000));
        inventario.push_back(new Seminuevo("Chevrolet", "Malibu", 2018, 55000, 130000));
        inventario.push_back(new Seminuevo("Mazda", "3", 2017, 65000, 230000));
    }


    vector<Auto*> obtenerInventario() const {
        return inventario;
    }

    ~Inventario() {
        for (auto& autoObj : inventario) {
            delete autoObj;
        }
    }
};

#endif
