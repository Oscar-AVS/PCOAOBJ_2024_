// Este es el progrma creado para la clase "Sedan.h" en donde se asignan valores y se especifica que atributo tiene el objeto perteneciente a esta clase 
// Creado por: Oscar Alexander Vilchis Soto (A01713207)
// Creado el 10/11/2024
#ifndef SEDAN_H
#define SEDAN_H
#include <iostream>
#include <string>
using namespace std;

class Sedan {
private:
    double eficiencia_combustible;
    string marca;
    string modelo;
    int anio;
    double precio;
    string tipo_transmision;

public:
    // Constructor
    Sedan(double eff, string m, string mod, int a, double p, string transm)
        : eficiencia_combustible(eff), marca(m), modelo(mod), anio(a), precio(p), tipo_transmision(transm) {}

    // Getters
    double getEficienciaCombustible() const { return eficiencia_combustible; }
    string getMarca() const { return marca; }
    string getModelo() const { return modelo; }
    int getAnio() const { return anio; }
    double getPrecio() const { return precio; }
    string getTipoTransmision() const { return tipo_transmision; }

    // Setters
    void setEficienciaCombustible(double eff) { eficiencia_combustible = eff; }
    void setMarca(const string &m) { marca = m; }
    void setModelo(const string &mod) { modelo = mod; }
    void setAnio(int a) { anio = a; }
    void setPrecio(double p) { precio = p; }
    void setTipoTransmision(const string &transm) { tipo_transmision = transm; }

    void mostrarInfo() const {
        cout << "Sedán: " << marca << " " << modelo << ", Año: " << anio
             << ", Eficiencia: " << eficiencia_combustible << " km/l, Precio: $"
             << precio << ", Transmisión: " << tipo_transmision << "\n";
    }

    void calcularRendimiento(double distancia) const {
        double consumo = distancia / eficiencia_combustible;
        cout << "Para recorrer " << distancia << " km, el " << marca << " " << modelo
             << " tiene un consumo de:  " << consumo << " litros de combustible.\n";
    }
};

#endif //SEDAN_H
