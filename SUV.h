// Este es el progrma para la clase SUV en donde se especifica que atributos tiene dicha clase 
// Creado por: Oscar Alexander Vilchis Soto (A01713207)
// Creado el 10/11/2024


#ifndef SUV_H
#define SUV_H
#include <iostream>
#include <string>
using namespace std;

class SUV {
private:
    int cantidad_pasajeros;
    double espacio_cajuela;
    string marca;
    string modelo;
    int anio;
    double precio;
    string traccion;

public:
    // Constructor
    SUV(int pasajeros, double espacio, string m, string mod, int a, double p, string tracc)
        : cantidad_pasajeros(pasajeros), espacio_cajuela(espacio), marca(m), modelo(mod), anio(a), precio(p), traccion(tracc) {}

    // Getters
    int getCantidadPasajeros() const { return cantidad_pasajeros; }
    double getEspacioCajuela() const { return espacio_cajuela; }
    string getMarca() const { return marca; }
    string getModelo() const { return modelo; }
    int getAnio() const { return anio; }
    double getPrecio() const { return precio; }
    string getTraccion() const { return traccion; }

    // Setters
    void setCantidadPasajeros(int pasajeros) { cantidad_pasajeros = pasajeros; }
    void setEspacioCajuela(double espacio) { espacio_cajuela = espacio; }
    void setMarca(const string &m) { marca = m; }
    void setModelo(const string &mod) { modelo = mod; }
    void setAnio(int a) { anio = a; }
    void setPrecio(double p) { precio = p; }
    void setTraccion(const string &tracc) { traccion = tracc; }

    void mostrarInfo() const {
        cout << "SUV: " << marca << " " << modelo << ", Año: " << anio << ", Pasajeros: "
             << cantidad_pasajeros << ", Espacio de Cajuela: " << espacio_cajuela
             << " litros, Precio: $" << precio << ", Tracción: " << traccion << "\n";
    }

    void activarTraccion() const {
        cout << "La tracción del " << marca << " " << modelo << " es: " << traccion << ".\n";
    }
};

#endif //SUV_H
