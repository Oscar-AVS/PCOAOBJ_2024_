// Este es el progrma para la clase "Seminuevo.h" en donde se especifica y se expresan los atributos de los objetos pertenecientes a esta clase.
// Creado por: Oscar Alexander Vilchis Soto (A01713207)
// Creado el 24/11/2024 

#ifndef SEMINUEVO_H
#define SEMINUEVO_H

#include "Auto.h"

class Seminuevo : public Auto {
private:
    int kilometraje;

public:
    Seminuevo(string marca, string modelo, int anio, int km, float precio)
        : Auto(marca, modelo, anio, precio), kilometraje(km) {}

    void mostrarInfo() const override {
        Auto::mostrarInfo();
        cout << "Kilometraje: " << kilometraje << " km\n";
    }

    int getKilometraje() const { return kilometraje; }
    void setKilometraje(int km) { kilometraje = km; }
};

#endif
