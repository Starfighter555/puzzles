#include <iostream>
#include <initializer_list>
#include <format>

template<typename T>
T makeAvr(std::initializer_list<T> values) {
    T total { 0 };
    for (T value : values) {
        total += value;
    }
    return total/values.size();
}

int main(){
    auto a = makeAvr<int>({1, 2, 3});
    auto b = makeAvr<double>({1.1, 2.2, 3.3});

    std::cout << std::format("Average of {{1, 2, 3}} = {}\n", a);
    std::cout << std::format("Average of {{1.1, 2.2, 3.3}} = {}\n", b);
    return 0;
}