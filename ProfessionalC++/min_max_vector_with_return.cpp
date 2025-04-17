#include <iostream>
#include <utility> // for std::pair
#include <format>
#include <vector>

std::pair<int, int> getMinMax(const std::vector<int>& values);

std::pair<int, int> getMinMax(const std::vector<int>& values) {
    if (values.empty()) {
        throw std::invalid_argument("The vector is empty.");
    }

    int min = values[0];
    int max = values[0];

    for (const auto& value : values) {
        if (value < min) {
            min = value;
        }
        if (value > max) {
            max = value;
        }
    }

    return std::make_pair(min, max);
}


int main() {
    std::vector<int> values;
    int input;

    std::cout << "Gib ganze Zahlen ein (mit 'q' beenden):\n";

    while (std::cin >> input) {
        values.push_back(input);
    }

    std::cin.clear();  // stream zurücksetzen (wegen 'q')
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << std::format("Du hast {} Zahlen eingegeben.\n", values.size());

    // Jetzt kannst du getMinMax(values) aufrufen 👍
    std::pair<int, int> result = getMinMax(values);
    std::cout << std::format("Min: {}, Max: {}\n", result.first, result.second);
    
    return 0;
}
