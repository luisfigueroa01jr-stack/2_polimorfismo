#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>

// Clase base de la jerarquia de vehiculos
class Vehiculo {
protected:
    std::string marca;
    std::string modelo;
    int velocidadMax; // km/h

    // Imprime los datos comunes (sin salto de linea) para que las derivadas los reutilicen
    void mostrarDatosComunes() const;

public:
    Vehiculo(const std::string& marca, const std::string& modelo, int velocidadMax);
    virtual ~Vehiculo() = default;

    // Getters
    std::string getMarca() const;
    std::string getModelo() const;
    int getVelocidadMax() const;

    // Setters
    void setMarca(const std::string& marca);
    void setModelo(const std::string& modelo);
    void setVelocidadMax(int velocidadMax);

    // Metodo virtual que cada derivada sobrescribe
    virtual void mostrarInfo() const;

    // Devuelve el nombre del tipo real del objeto ("Auto", "Motocicleta")
    virtual std::string tipo() const;
};

#endif
