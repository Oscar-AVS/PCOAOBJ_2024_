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
