// Este es el progrma para la clase SUV en donde se especifica que atributos tiene dicha clase 
// Creado por: Oscar Alexander Vilchis Soto (A01713207)
// Creado el 10/11/2024 - Se modificó el 20/11/2024 
//// En esta modificación se cambió el funcionamiento del código ya que ahora hereda distintos atributos de la clase padre Autos.h y mantiene solo ciertos métodos adicionales 


#ifndef SUV_H
#define SUV_H

#include "Auto.h"

class SUV : public Auto {
private:
    int cantidadPasajeros;
    float espacioCajuela;
    string traccion;

public:
    // Constructor
    SUV(const string& marca, const string& modelo, int anio, float precio, int cantidadPasajeros, float espacioCajuela, const string& traccion)
        : Auto(marca, modelo, anio, precio), cantidadPasajeros(cantidadPasajeros), espacioCajuela(espacioCajuela), traccion(traccion) {}

    // Métodos
    void mostrarInfo() override {
        Auto::mostrarInfo();
        cout << "Capacidad de Pasajeros: " << cantidadPasajeros
             << "\nEspacio de Cajuela: " << espacioCajuela << " m3"
             << "\nTracción: " << traccion << endl;
    }

    void activarTraccion() {
        cout << "La tracción " << traccion << " está activada." << endl;
    }
};

#endif // SUV_H
