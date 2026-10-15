#ifndef AUTO_H
#define AUTO_H

#include "Vehiculo.h"

// Clase derivada: hereda de Vehiculo y agrega atributos propios
class Auto : public Vehiculo {
private:
    int numPuertas;
    std::string tipoCombustible;

public:
    Auto(const std::string& marca, const std::string& modelo, int velocidadMax,
         int numPuertas, const std::string& tipoCombustible);

    int getNumPuertas() const;
    std::string getTipoCombustible() const;

    void setNumPuertas(int numPuertas);
    void setTipoCombustible(const std::string& tipoCombustible);

    void mostrarInfo() const override;
    std::string tipo() const override;
};

#endif
