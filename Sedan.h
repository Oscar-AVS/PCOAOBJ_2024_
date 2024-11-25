// Este es el progrma creado para la clase "Sedan.h" en donde se asignan valores y se especifica que atributo tiene el objeto perteneciente a esta clase 
// Creado por: Oscar Alexander Vilchis Soto (A01713207)
// Creado el 10/11/2024 - Se modificó el 19/11/2024 - Se modificó el 24/11/2024
// En esta modificación se cambió el funcionamiento del código ya que ahora hereda distintos atributos de la clase padre Autos.h y mantiene solo ciertos métodos adicionales 
// En la segunda modiciación se añaden setters que carecían en el primer avance 
#ifndef SEDAN_H
#define SEDAN_H

#include "Auto.h"

class Sedan : public Auto {
private:
    int numPuertas;
    string tipoTransmision;
    float consumoGasolina;

public:
    Sedan(string marca, string modelo, int anio, int puertas, string transmision, float consumo, float precio)
        : Auto(marca, modelo, anio, precio), numPuertas(puertas), tipoTransmision(transmision), consumoGasolina(consumo) {}

    void mostrarInfo() const override {
        Auto::mostrarInfo();
        cout << "Puertas: " << numPuertas << ", Transmisión: " << tipoTransmision << ", Consumo Gasolina: " << consumoGasolina << " km/l\n";
    }

    int getNumPuertas() const { return numPuertas; }
    string getTipoTransmision() const { return tipoTransmision; }
    float getConsumoGasolina() const { return consumoGasolina; }

    void setNumPuertas(int puertas) { numPuertas = puertas; }
    void setTipoTransmision(const string &transmision) { tipoTransmision = transmision; }
    void setConsumoGasolina(float consumo) { consumoGasolina = consumo; }
};

#endif
