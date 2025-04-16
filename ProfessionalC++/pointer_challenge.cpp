#include <iostream>

int main() {
    double pi = 3.1415;
    double* ptr = &pi;

    std::cout << "value: " << *ptr << std::endl; // Gibt: 3.1415
    std::cout << "value: " << pi << std::endl;  // Gibt: 3.1415
    std::cout << "address: " << ptr << std::endl;  // Gibt die Adresse von pi aus

    const double* ptr_2 = new double(3.1415); // ✅ Speicher aus dem Heap mit Wert 3.1415
    std::cout << "value pi: " << *ptr_2 << std::endl; // Gibt: 3.1415
    std::cout << *ptr_2 << "\n";    // → 42
    delete ptr_2;

    return 0;
}