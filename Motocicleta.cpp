#include "Motocicleta.h"
#include <iostream>

Motocicleta::Motocicleta(const std::string& marca, const std::string& modelo, int velocidadMax,
                         int cilindrada, bool tieneSidecar)
    : Vehiculo(marca, modelo, velocidadMax),
      cilindrada(0), tieneSidecar(tieneSidecar) {
    setCilindrada(cilindrada);
}

int Motocicleta::getCilindrada() const { return cilindrada; }
bool Motocicleta::getTieneSidecar() const { return tieneSidecar; }

void Motocicleta::setCilindrada(int cilindrada) {
    // Validacion: la cilindrada no puede ser negativa
    this->cilindrada = (cilindrada >= 0) ? cilindrada : 0;
}
void Motocicleta::setTieneSidecar(bool tieneSidecar) { this->tieneSidecar = tieneSidecar; }

void Motocicleta::mostrarInfo() const {
    std::cout << "[MOTO] ";
    mostrarDatosComunes(); // reutiliza la parte comun de la clase base
    std::cout << " | Cilindrada: " << cilindrada << " cc"
              << " | Sidecar: " << (tieneSidecar ? "Si" : "No") << std::endl;
}

std::string Motocicleta::tipo() const {
    return "Motocicleta";
}
