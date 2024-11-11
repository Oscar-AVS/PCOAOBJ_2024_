int main() {
    Deportivo deportivo("Ferrari", "488 GTB", 330, 2023, 250000, "V8", 710);
    Sedan sedan(15.0, "Toyota", "Camry", 2022, 30000, "Automática");
    SUV suv(7, 750, "Jeep", "Grand Cherokee", 2023, 40000, "4x4");

    deportivo.mostrarInfo();
    deportivo.acelerar();

    cout << endl;

    sedan.mostrarInfo();
    sedan.calcularRendimiento(100);

    cout << endl;

    suv.mostrarInfo();
    suv.activarTraccion();

    return 0;
}
