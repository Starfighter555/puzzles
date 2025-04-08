#include <iostream>
#include <tuple>
#include <string>

// Funktion, die mehrere Werte zurückgibt
std::tuple<int, std::string, double> get_user_data() {
    int id = 42;
    std::string name = "Oreschnik";
    double score = 98.5;

    return std::make_tuple(id, name, score);
}

int main() {
    // Structured binding zum Entpacken
    auto [id, name, score] = get_user_data();

    std::cout << "ID: " << id << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Score: " << score << "\n";

    return 0;
}
