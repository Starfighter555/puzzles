#include <iostream>

int main() {
    int value = 42;
    int* ptr = &value;

    std::cout << "value: " << *ptr << std::endl;  // Gibt: 42
    std::cout << "value: " << value << std::endl;  // Gibt: 42
    std::cout << "address: " << ptr << std::endl;  // Gibt die Adresse von value aus

    return 0;
}