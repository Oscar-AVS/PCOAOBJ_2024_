// Este es el progrma principal (main) en donde se implementan todos los códigos creados para cada clase (archivos.h) en este código se le muestra al usuario cada atributo del objeto. 
// Creado por: Oscar Alexander Vilchis Soto (A01713207)
// Creado el 10/11/2024 - modificado el 19/11/2024- modificado el 24/11/2024
// Se modificó el código para poder adecuarlo a las nuevas clases de Findmy.h y Auto.h de manera que se pueda implementar en el código la herencia y composición entre clases, este código solo es para llamar a las clases y poder mostrar el resumen al usuario
// EN la nueva modificación se adaptó el código para que pudiera implementar la interacción con el usuario através de la clase Findmy y de la clase inventario 
#include <iostream>
#include "FindMy.h"
#include "Inventario.h"

using namespace std;

int main() {
    Inventario inventario;
    FindMy findMy;

    for (const auto& autoObj : inventario.obtenerInventario()) {
        findMy.agregarAuto(autoObj);
    }

    findMy.interactuarUsuario();

    return 0;
}

