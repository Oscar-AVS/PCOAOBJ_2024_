// Este es el progrma para la clase "Deportivo.h" en donde se especifica y se expresan los atributos de los objetos pertenecientes a esta clase.
// Creado por: Oscar Alexander Vilchis Soto (A01713207)
// Creado el 10/11/2024 -  se modificó el 20/11/2024 - Se modificó el 24/11/2024
// En esta modificación se cambió el funcionamiento del código ya que ahora hereda distintos atributos de la clase padre Autos.h y mantiene solo ciertos métodos adicionales 
// En esta segunda modificación se añadieron setters que faltaban así como se añadieron ciertos atributos  como velocidad max 
#ifndef DEPORTIVO_H
#define DEPORTIVO_H

#include "Auto.h"

class Deportivo : public Auto {
private:
    int velocidadMax;
    string motor;
    int caballosFuerza;

public:
    Deportivo(string marca, string modelo, int anio, int velMax, string motor, int caballos, float precio)
        : Auto(marca, modelo, anio, precio), velocidadMax(velMax), motor(motor), caballosFuerza(caballos) {}

    void mostrarInfo() const override {
        Auto::mostrarInfo();
        cout << "Velocidad Máxima: " << velocidadMax << " km/h, Motor: " << motor << ", Caballos de fuerza: " << caballosFuerza << " HP\n";
    }

    int getVelocidadMax() const { return velocidadMax; }
    string getMotor() const { return motor; }
    int getCaballosFuerza() const { return caballosFuerza; }

    void setVelocidadMax(int velMax) { velocidadMax = velMax; }
    void setMotor(const string &motor) { this->motor = motor; }
    void setCaballosFuerza(int caballos) { caballosFuerza = caballos; }
};

#endif
