// menu.cpp
#include <iostream>
#include "menue.hpp"

int menue() {
    int choice = 0;
    std::cout << "Permutation mit Zahlen oder Buchstaben\n";
    std::cout << "--------------------------------------\n";
    std::cout << "1. Zahlen\n";
    std::cout << "2. Buchstaben\n"; 
    std::cout << "3. Beenden\n";
    std::cout << "Bitte wählen Sie eine Option: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Sie haben Zahlen gewählt.\n";
            break;
        case 2:
            std::cout << "Sie haben Buchstaben gewählt.\n";
            break;
        case 3:
            std::cout << "Programm wird beendet.\n";
            break;
        default:
            std::cout << "Ungültige Auswahl. Bitte erneut versuchen.\n";
            break;
    }
    return choice;
}
