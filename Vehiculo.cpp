#include "Vehiculo.h"
#include <iostream>

Vehiculo::Vehiculo(const std::string& marca, const std::string& modelo, int velocidadMax)
    : marca(marca), modelo(modelo), velocidadMax(0) {
    setVelocidadMax(velocidadMax);
}

std::string Vehiculo::getMarca() const { return marca; }
std::string Vehiculo::getModelo() const { return modelo; }
int Vehiculo::getVelocidadMax() const { return velocidadMax; }

void Vehiculo::setMarca(const std::string& marca) { this->marca = marca; }
void Vehiculo::setModelo(const std::string& modelo) { this->modelo = modelo; }

void Vehiculo::setVelocidadMax(int velocidadMax) {
    // Validacion: la velocidad no puede ser negativa
    this->velocidadMax = (velocidadMax >= 0) ? velocidadMax : 0;
}

void Vehiculo::mostrarDatosComunes() const {
    std::cout << "Marca: " << marca
              << " | Modelo: " << modelo
              << " | Velocidad max: " << velocidadMax << " km/h";
}

void Vehiculo::mostrarInfo() const {
    std::cout << "[VEHICULO] ";
    mostrarDatosComunes();
    std::cout << std::endl;
}
