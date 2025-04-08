#include <iostream>
#include <string>
#include <utility>   // std::pair
#include <format>    // ab C++20

int main() {
    std::pair<std::string, int> myPair { "hello", 5 };

    auto [theString, theInt] = myPair;  // ✅ structured binding

    std::cout << std::format("theString: {}\n", theString);
    std::cout << std::format("theInt: {}\n", theInt);

    return 0;
}
