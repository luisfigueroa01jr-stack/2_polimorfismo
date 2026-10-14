#ifndef MOTOCICLETA_H
#define MOTOCICLETA_H

#include "Vehiculo.h"

// Clase derivada: hereda de Vehiculo y agrega atributos propios
class Motocicleta : public Vehiculo {
private:
    int cilindrada; // cc
    bool tieneSidecar;

public:
    Motocicleta(const std::string& marca, const std::string& modelo, int velocidadMax,
                int cilindrada, bool tieneSidecar);

    int getCilindrada() const;
    bool getTieneSidecar() const;

    void setCilindrada(int cilindrada);
    void setTieneSidecar(bool tieneSidecar);

    void mostrarInfo() const override;
};

#endif
