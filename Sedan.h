// Este es el progrma creado para la clase "Sedan.h" en donde se asignan valores y se especifica que atributo tiene el objeto perteneciente a esta clase 
// Creado por: Oscar Alexander Vilchis Soto (A01713207)
// Creado el 10/11/2024 - Se modificó el 19/11/2024 
// En esta modificación se cambió el funcionamiento del código ya que ahora hereda distintos atributos de la clase padre Autos.h y mantiene solo ciertos métodos adicionales 
#ifndef SEDAN_H
#define SEDAN_H
#include <iostream>
#include <string>
using namespace std;
#include "Auto.h"

class Sedan : public Auto {
private:
    string tipoTransmision;
    float eficienciaCombustible;

public:
    // Constructor
    Sedan(const string& marca, const string& modelo, int anio, float precio, const string& tipoTransmision, float eficienciaCombustible)
        : Auto(marca, modelo, anio, precio), tipoTransmision(tipoTransmision), eficienciaCombustible(eficienciaCombustible) {}

    // Métodos
    void mostrarInfo() override {
        Auto::mostrarInfo();
        cout << "Transmisión: " << tipoTransmision
             << "\nEficiencia: " << eficienciaCombustible << " km/l" << endl;
    }

    void calcularRendimiento(float kilometros) {
        cout << "Rendimiento esperado: " << kilometros / eficienciaCombustible << " litros de combustible." << endl;
    }
};
#endif // SEDAN_H

