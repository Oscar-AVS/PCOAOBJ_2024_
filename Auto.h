// Creado por Oscar Alexander VIlchis Soto (a0171320/)
// Este código es la clase padre de las distintas categorías de autos, tiene herencia con ellos y por tanto aquí se acumulan distintos atributos como marca, modelo, año y el precio
// Se modificó el 24/11/2024 - 
#ifndef AUTO_H
#define AUTO_H

#include <iostream>
#include <string>
using namespace std;

class Auto {
protected:
    string marca;
    string modelo;
    int anio;
    float precio;

public:
    Auto(string marca, string modelo, int anio, float precio)
        : marca(marca), modelo(modelo), anio(anio), precio(precio) {}

    virtual void mostrarInfo() const {
        cout << "Marca: " << marca << ", Modelo: " << modelo << ", Anio: " << anio << ", Precio: $" << precio << endl;
    }

    string getMarca() const { return marca; }
    string getModelo() const { return modelo; }
    int getAnio() const { return anio; }
    float getPrecio() const { return precio; }

    void setMarca(const string &marca) { this->marca = marca; }
    void setModelo(const string &modelo) { this->modelo = modelo; }
    void setAnio(int anio) { this->anio = anio; }
    void setPrecio(float precio) { this->precio = precio; }

    virtual ~Auto() {}
};

#endif
