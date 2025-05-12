#include <iostream>
#include <format>
#include <tuple>
#include <cmath> // für M_PI
#include <numbers>

auto circle_geometry(double radius) -> std::tuple<double, double> {
    // double umfang = 2 * M_PI * radius;
    double umfang = 2 * std::numbers::pi * radius;
    // double flaeche = M_PI * radius * radius;
    double flaeche = std::numbers::pi * radius * radius;
    return {umfang, flaeche};  // Rückgabe als Tuple
}

int main() {
    double r = 5.0;

    // Strukturierte Bindung (C++17): Entpackt das Tuple in zwei Variablen
    auto [u, f] = circle_geometry(r);

    std::cout << std::format("Radius: {}\n", r);
    std::cout << std::format("Umfang: {:.2f}\n", u);
    std::cout << std::format("Fläche: {:.2f}\n", f);

    return 0;
}
