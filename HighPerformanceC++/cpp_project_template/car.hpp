// ---------- Datei: car.hpp ----------
#ifndef CAR_HPP
#define CAR_HPP

#include <string>

namespace oreschnik {

class Car {
public:
    Car(std::string brand, int doors);
    void honk() const;
    std::string brand() const;
    int doors() const;

private:
    std::string brand_;
    int doors_;
};

}  // namespace oreschnik

#endif  // CAR_HPP