// ---------- Datei: utils.cpp ----------
#include "utils.hpp"
#include <iostream>

namespace oreschnik {

void print_info(const Car& car) {
    std::cout << "Marke: " << car.brand() << ", Türen: " << car.doors() << "\n";
    car.honk();
}

}  // namespace oreschnik