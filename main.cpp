// Ejercicio 2: Polimorfismo en accion
#include <iostream>
#include <memory>
#include <vector>
#include "Auto.h"
#include "Motocicleta.h"

int main() {
    std::cout << "=== 2. Polimorfismo ===" << std::endl;

    // Coleccion de la clase base que guarda objetos de las derivadas.
    // unique_ptr libera la memoria automaticamente al terminar.
    std::vector<std::unique_ptr<Vehiculo>> vehiculos;
    vehiculos.push_back(std::make_unique<Auto>("BMW", "M4 Competition", 290, 2, "Gasolina"));
    vehiculos.push_back(std::make_unique<Motocicleta>("Ducati", "Panigale V4", 299, 1103, false));
    vehiculos.push_back(std::make_unique<Auto>("Porsche", "911 GT3 RS", 296, 2, "Gasolina"));
    vehiculos.push_back(std::make_unique<Motocicleta>("Ural", "Gear Up", 110, 749, true));

    // La misma llamada produce una salida distinta segun el tipo real del objeto
    for (const auto& v : vehiculos) {
        v->mostrarInfo();
    }

    return 0;
}
