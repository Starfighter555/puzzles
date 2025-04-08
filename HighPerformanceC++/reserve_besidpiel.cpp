#include <iostream>
#include <vector>

class Car {
public:
    Car(int doors = 4) : doors_(doors) {
        std::cout << "✅ Konstruktor: Car mit " << doors_ << " Türen\n";
    }

    ~Car() {
        std::cout << "❌ Destruktor: Car mit " << doors_ << " Türen\n";
    }

private:
    int doors_;
};

int main() {
    std::cout << "--- reserve(3) ---\n";
    std::vector<Car> cars;
    cars.reserve(3);  // Speicher reserviert, aber keine Konstruktoren aufgerufen

    std::cout << "--- push_back 1 ---\n";
    cars.push_back(Car{2});  // Jetzt 1 Objekt konstruiert

    std::cout << "--- push_back 2 ---\n";
    cars.push_back(Car{4});  // Jetzt 2 Objekte konstruiert

    std::cout << "--- Ende von main() ---\n";
    return 0;
}
