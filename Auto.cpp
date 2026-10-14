#include "Auto.h"
#include <iostream>

Auto::Auto(const std::string& marca, const std::string& modelo, int velocidadMax,
           int numPuertas, const std::string& tipoCombustible)
    : Vehiculo(marca, modelo, velocidadMax),
      numPuertas(0), tipoCombustible(tipoCombustible) {
    setNumPuertas(numPuertas);
}

int Auto::getNumPuertas() const { return numPuertas; }
std::string Auto::getTipoCombustible() const { return tipoCombustible; }

void Auto::setNumPuertas(int numPuertas) {
    // Validacion: el numero de puertas no puede ser negativo
    this->numPuertas = (numPuertas >= 0) ? numPuertas : 0;
}
void Auto::setTipoCombustible(const std::string& tipoCombustible) {
    this->tipoCombustible = tipoCombustible;
}

void Auto::mostrarInfo() const {
    std::cout << "[AUTO] ";
    mostrarDatosComunes(); // reutiliza la parte comun de la clase base
    std::cout << " | Puertas: " << numPuertas
              << " | Combustible: " << tipoCombustible << std::endl;
}
