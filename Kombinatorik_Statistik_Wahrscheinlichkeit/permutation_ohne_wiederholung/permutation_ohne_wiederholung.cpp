#include <iostream>
#include <vector>
#include <string>
#include <set>
#include "menue.hpp"
#include "permutations.hpp"
#include "read_input.hpp"

// Hilfsfunktion zur Duplikaterkennung
template <typename T>
bool contains_duplicates(const std::vector<T>& vec) {
    std::set<T> s(vec.begin(), vec.end());
    return s.size() != vec.size();
}

int main() {
    int choice = menue();

    if (choice == 1) {
        std::vector<int> zahlen;
        std::string input;
        std::cout << "Geben Sie Zahlen ein (mit 'q' beenden):\n";

        while (true) {
            std::cin >> input;
            if (input == "q") break;
            try {
                zahlen.push_back(std::stoi(input));
            } catch (...) {
                std::cout << "Ungültige Eingabe.\n";
            }
        }

        if (contains_duplicates(zahlen)) {
            std::cout << "Fehler: Zahlen enthalten Duplikate. Permutation ohne Wiederholung nicht möglich.\n";
        } else if (!zahlen.empty()) {
            std::cout << "\nAnzahl Permutationen: "
                      << count_unique_permutations(std::vector<char>(zahlen.begin(), zahlen.end())) << '\n';
            show_unique_permutations(zahlen);
        } else {
            std::cout << "Keine Zahlen eingegeben.\n";
        }

    } else if (choice == 2) {
        std::vector<char> buchstaben;
        std::string input;
        std::cout << "Geben Sie Buchstaben einzeln ein (mit 'q' beenden):\n";

        while (true) {
            std::cin >> input;
            if (input == "q") break;
            if (input.length() == 1 && std::isalpha(input[0])) {
                buchstaben.push_back(input[0]);
            } else {
                std::cout << "Bitte genau einen Buchstaben eingeben.\n";
            }
        }

        if (contains_duplicates(buchstaben)) {
            std::cout << "Fehler: Buchstaben enthalten Duplikate. Permutation ohne Wiederholung nicht möglich.\n";
        } else if (!buchstaben.empty()) {
            std::cout << "\nAnzahl Permutationen: "
                      << count_unique_permutations(buchstaben) << '\n';
            show_unique_permutations(buchstaben);
        } else {
            std::cout << "Keine Buchstaben eingegeben.\n";
        }

    } else {
        std::cout << "Ungültige Auswahl.\n";
    }

    return 0;
}
