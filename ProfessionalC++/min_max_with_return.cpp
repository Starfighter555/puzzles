#include <iostream>
#include <utility> // for std::pair

std::pair<int, int> getMinMax(int a, int b);

std::pair<int, int> getMinMax(int a, int b) {
    if (a < b) {
        return std::make_pair(a, b);
    } else {
        return std::make_pair(b, a);
    }
}

int main(){
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    std::pair<int, int> result = getMinMax(a, b);
    std::cout << "Min: " << result.first << ", Max: " << result.second << std::endl;
    return 0;
}