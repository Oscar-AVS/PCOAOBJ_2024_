// Este es el progrma para la clase "Deportivo.h" en donde se especifica y se expresan los atributos de los objetos pertenecientes a esta clase.
// Creado por: Oscar Alexander Vilchis Soto (A01713207)
// Creado el 10/11/2024 -  se modificó el 20/11/2024 
// En esta modificación se cambió el funcionamiento del código ya que ahora hereda distintos atributos de la clase padre Autos.h y mantiene solo ciertos métodos adicionales 
#ifndef DEPORTIVO_H
#define DEPORTIVO_H

#include "Auto.h"

class Deportivo : public Auto {
private:
    string motor;
    int caballosFuerza;

public:
    // Constructor
    Deportivo(const string& marca, const string& modelo, int anio, float precio, const string& motor, int caballosFuerza)
        : Auto(marca, modelo, anio, precio), motor(motor), caballosFuerza(caballosFuerza) {}

    // Métodos
    void mostrarInfo() override {
        Auto::mostrarInfo();
        cout << "Motor: " << motor << "\nCaballos de Fuerza: " << caballosFuerza << endl;
    }

    void acelerar() {
        cout << "El " << modelo << " está acelerando a toda velocidad." << endl;
    }
};

#endif // DEPORTIVO_H
