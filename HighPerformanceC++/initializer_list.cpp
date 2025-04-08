#include <iostream>
#include <initializer_list>
#include <format>

int makeSum(std::initializer_list<int> values) {
    int total { 0 };
    for (int value : values) {
        total += value;
    }
    return total;
}

int main() {
    int a { makeSum({ 1, 2, 3 }) };
    int b { makeSum({ 10, 20, 30, 40, 50, 60 }) };

    std::cout << "Sum of { 1, 2, 3 } = " << a << std::endl;
    std::cout << "Sum of { 10, 20, 30, 40, 50, 60 } = " << b << std::endl;

    std::cout << std::format("Sum of {{ 1, 2, 3 }} = {}\n", a);
    std::cout << std::format("Sum of {{ 10, 20, 30, 40, 50, 60 }} = {}\n", b);

    return 0;
}
