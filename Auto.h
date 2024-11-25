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
