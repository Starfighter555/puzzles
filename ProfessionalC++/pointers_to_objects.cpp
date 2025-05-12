#include <iostream>
#include <memory>  // für std::unique_ptr oder std::shared_ptr

struct Employee {
    double salary;
};

Employee* getEmployee(bool returnNullptr) {
    if (returnNullptr) {
        return nullptr;
    }
    return new Employee{5000.0};  // erzeugt ein Employee-Objekt im Heap
}

int main() {
    // Ändere true/false, um Verhalten zu testen
    Employee* emp1 = getEmployee(false);
    Employee* emp2 = getEmployee(true);  // gibt nullptr zurück

    // Sicherer Zugriff mit short-circuiting
    if (emp1 && emp1->salary > 0) {
        std::cout << "emp1 has valid salary: " << emp1->salary << '\n';
    }

    if (emp2 && emp2->salary > 0) {
        std::cout << "emp2 has valid salary: " << emp2->salary << '\n';  // wird nicht aufgerufen
    } else {
        std::cout << "emp2 is nullptr or salary is invalid.\n";
    }

    // Speicher freigeben (nur weil wir mit new gearbeitet haben)
    delete emp1;
    // emp2 ist nullptr, daher kein delete nötig

    return 0;
}
