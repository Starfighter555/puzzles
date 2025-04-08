// ---------- Datei: car.cpp ----------
#include "car.hpp"
#include <iostream>

namespace oreschnik {

Car::Car(std::string brand, int doors) : brand_(std::move(brand)), doors_(doors) {}

void Car::honk() const {
    std::cout << brand_ << " hupt!\n";
}

std::string Car::brand() const {
    return brand_;
}

int Car::doors() const {
    return doors_;
}

}  // namespace oreschnik