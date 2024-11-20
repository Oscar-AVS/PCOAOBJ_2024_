// Creado por Oscar Alexander VIlchis Soto (a0171320/)
// Este código es la clase padre de las distintas categorías de autos, tiene herencia con ellos y por tanto aquí se acumulan distintos atributos como marca, modelo, año y el precio

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
    Auto(const string& marca, const string& modelo, int anio, float precio)
        : marca(marca), modelo(modelo), anio(anio), precio(precio) {}

    virtual void mostrarInfo() {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Año: " << anio << endl;
        cout << "Precio: $" << precio << endl;
    }

    // Getters y Setters
    string getMarca() const { return marca; }
    void setMarca(const string& marca) { this->marca = marca; }

    string getModelo() const { return modelo; }
    void setModelo(const string& modelo) { this->modelo = modelo; }

    int getAnio() const { return anio; }
    void setAnio(int anio) { this->anio = anio; }

    float getPrecio() const { return precio; }
    void setPrecio(float precio) { this->precio = precio; }
};

#endif // AUTO_H
