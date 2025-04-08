#include <iostream>
#include <array>  // ✅ Besser als C-Arrays
#include <ranges> // ✅ Neu in C++20/23 für `std::views::all`

using namespace std;

int main() {
    // ✅ Verwende `std::array`, es ist sicherer als C-Arrays
    array my_array {1, 2, 3};  

    // ✅ Nutze `std::ranges::all` für bessere Iteration (C++23)
    for (int num : views::all(my_array)) {
        cout << num << endl;
    }

    // ✅ Automatisch mit `0` initialisiertes Array
    array<int, 3> my_next_array{};  

    for (int num : views::all(my_next_array)) {
        cout << num << endl;
    }

    return 0;
}
