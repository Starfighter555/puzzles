#include <iostream>
#include <optional>
#include <string>

std::optional<std::string> find_user_by_id(int id) {
    if (id == 42)
        return "Oreschnik";
    else
        return std::nullopt;  // Kein Benutzer gefunden
}

int main() {
    int id;
    std::cout << "Benutzer-ID eingeben: ";
    std::cin >> id;

    std::optional<std::string> result {find_user_by_id(id)};

    // ✅ entweder echter Name oder Platzhalter
    std::string name = result.value_or("Unbekannter Benutzer");

    std::cout << "Benutzer: " << name << "\n";

    return 0;
}
