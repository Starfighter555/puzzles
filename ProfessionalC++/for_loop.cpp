#include <iostream>
#include <format>

int main() {
    // Using a for loop to print numbers from 1 to 10
    for (int i = 1; i <= 10; ++i) {
        std::cout << std::format("Number: {}\n", i);
        std::cout << "This is silly\n";
    }

    return 0;
}