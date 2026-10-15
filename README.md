# Ejercicio 2: Polimorfismo con vehiculos
Un `std::vector<std::unique_ptr<Vehiculo>>` guarda autos y motos mezclados y llama a `mostrarInfo()` en cada uno.
Ademas usa el metodo virtual `tipo()` para contar cuantos vehiculos hay de cada tipo.

**Archivos:** `Vehiculo.h/.cpp` (clase base con `mostrarInfo()` y `tipo()` virtuales) · `Auto.h/.cpp` y `Motocicleta.h/.cpp` (derivadas que los sobrescriben) · `main.cpp` (vector polimorfico y conteo por tipo)

- **Compilar:** `g++ -std=c++17 -Wall *.cpp -o programa.exe`
- **Ejecutar:** `./programa.exe`

```
[AUTO] Marca: BMW | Modelo: M4 Competition | Velocidad max: 290 km/h | Puertas: 2 | Combustible: Gasolina
[MOTO] Marca: Ducati | Modelo: Panigale V4 | Velocidad max: 299 km/h | Cilindrada: 1103 cc | Sidecar: No
...
-- Conteo por tipo --
Auto: 2
Motocicleta: 2
```

**Concepto de POO:** polimorfismo dinamico (funciones virtuales, enlace en tiempo de ejecucion) y manejo de memoria con `unique_ptr`.
