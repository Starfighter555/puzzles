// Projekt: Modernes C++ Template
// --------------------------------
// Struktur:
// - main.cpp         -> Einstiegspunkt
// - utils.hpp/cpp    -> Hilfsfunktionen
// - car.hpp/cpp      -> Beispielklasse
// - namespace oreschnik

// ---------- Datei: main.cpp ----------
#include <iostream>
#include "car.hpp"
#include "utils.hpp"

using namespace oreschnik;

int main() {
    std::cout << "Starte das Programm\n";

    Car my_car{"Tesla", 4};
    print_info(my_car);

    return 0;
}
