// Este es el progrma para la clase SUV en donde se especifica que atributos tiene dicha clase 
// Creado por: Oscar Alexander Vilchis Soto (A01713207)
// Creado el 10/11/2024 - Se modificó el 20/11/2024 - Se modificó el 24/11/2024
//// En esta modificación se cambió el funcionamiento del código ya que ahora hereda distintos atributos de la clase padre Autos.h y mantiene solo ciertos métodos adicionales 
// en esta segunda modificación se le añadieron setters que faltabam 


#ifndef SUV_H
#define SUV_H

#include "Auto.h"

class SUV : public Auto {
private:
    string traccion;
    int cantidadPasajeros;
    float espacioCajuela;

public:
    SUV(string marca, string modelo, int anio, string traccion, int pasajeros, float cajuela, float precio)
        : Auto(marca, modelo, anio, precio), traccion(traccion), cantidadPasajeros(pasajeros), espacioCajuela(cajuela) {}

    void mostrarInfo() const override {
        Auto::mostrarInfo();
        cout << "Tracción: " << traccion << ", Pasajeros: " << cantidadPasajeros << ", Espacio Cajuela: " << espacioCajuela << " litros\n";
    }

    string getTraccion() const { return traccion; }
    int getCantidadPasajeros() const { return cantidadPasajeros; }
    float getEspacioCajuela() const { return espacioCajuela; }

    void setTraccion(const string &traccion) { this->traccion = traccion; }
    void setCantidadPasajeros(int pasajeros) { cantidadPasajeros = pasajeros; }
    void setEspacioCajuela(float cajuela) { espacioCajuela = cajuela; }
};

#endif
