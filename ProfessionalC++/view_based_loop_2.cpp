#include <iostream>
#include <ranges>

int main() {
    auto even = [](int n) { return n % 2 == 0; };

    for (int i : std::views::iota(1, 11) | std::views::filter(even)) {
        std::cout << i << ' ';
    }
    // Ausgabe: 2 4 6 8 10
    return 0;
}
