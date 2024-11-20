// Este es el progrma principal (main) en donde se implementan todos los códigos creados para cada clase (archivos.h) en este código se le muestra al usuario cada atributo del objeto. 
// Creado por: Oscar Alexander Vilchis Soto (A01713207)
// Creado el 10/11/2024 - modificado el 19/11/2024
// Se modificó el código para poder adecuarlo a las nuevas clases de Findmy.h y Auto.h de manera que se pueda implementar en el código la herencia y composición entre clases, este código solo es para llamar a las clases y poder mostrar el resumen al usuario
int main() {
    FindMy app;

    // Agregar vehículos
    app.agregarDeportivo();
    app.agregarSUV();
    app.agregarSedan();

    // Mostrar vehículos disponibles
    app.mostrarVehiculos();

    // Pedir datos del usuario
    app.obtenerDatosUsuario();

    // Mostrar resumen
    app.mostrarResumen();

    return 0;
}
