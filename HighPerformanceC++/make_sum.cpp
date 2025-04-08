#include <iostream>
#include <initializer_list>
#include <format>

template<typename T>
T makeSum(std::initializer_list<T> values) {
    T total { 0 };
    for (T value : values) {
        total += value;
    }
    return total;
}

int main() {
    auto a = makeSum<int>({1, 2, 3});
    auto b = makeSum<double>({1.1, 2.2, 3.3});

    std::cout << std::format("Sum of {{1, 2, 3}} = {}\n", a);
    std::cout << std::format("Sum of {{1.1, 2.2, 3.3}} = {}\n", b);
}
