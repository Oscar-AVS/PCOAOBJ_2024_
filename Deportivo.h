// Este es el progrma para la clase "Deportivo.h" en donde se especifica y se expresan los atributos de los objetos pertenecientes a esta clase.
// Creado por: Oscar Alexander Vilchis Soto (A01713207)
// Creado el 10/11/2024
#ifndef DEPORTIVO_H
#define DEPORTIVO_H
#include <iostream>
#include <string>
using namespace std;

class Deportivo {
private:
    string marca;
    string modelo;
    int velocidad_max;
    int anio;
    double precio;
    string motor;
    int caballos_fuerza;

public:
    // Constructor
    Deportivo(string m, string mod, int vel, int a, double p, string mot, int hp)
        : marca(m), modelo(mod), velocidad_max(vel), anio(a), precio(p), motor(mot), caballos_fuerza(hp) {}

    // Getters
    string getMarca() const { return marca; }
    string getModelo() const { return modelo; }
    int getVelocidadMax() const { return velocidad_max; }
    int getAnio() const { return anio; }
    double getPrecio() const { return precio; }
    string getMotor() const { return motor; }
    int getCaballosFuerza() const { return caballos_fuerza; }

    // Setters
    void setMarca(const string &m) { marca = m; }
    void setModelo(const string &mod) { modelo = mod; }
    void setVelocidadMax(int vel) { velocidad_max = vel; }
    void setAnio(int a) { anio = a; }
    void setPrecio(double p) { precio = p; }
    void setMotor(const string &mot) { motor = mot; }
    void setCaballosFuerza(int hp) { caballos_fuerza = hp; }

    void mostrarInfo() const {
        cout << "Deportivo: " << marca << " " << modelo << ", del " << anio
             << ", Velocidad Máxima: " << velocidad_max << " km/h, Precio: $"
             << precio << ", Motor: " << motor << ", Caballos de Fuerza: "
             << caballos_fuerza << " hp\n";
    }

    void acelerar() const {
        cout << "El " << marca << " " << modelo << " tiene: "
             << caballos_fuerza << " caballos de fuerza, alcanzando su velocidad máxima de "
             << velocidad_max << " km/h.\n";
    }
};

#endif //DEPORTIVO_H
