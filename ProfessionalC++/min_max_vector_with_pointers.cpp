#include <iostream>
#include <utility> // for std::pair
#include <format>
#include <vector>

void getMinMax(const std::vector<int>& values, int* minPtr, int* maxPtr);

void getMinMax(const std::vector<int>& values, int* minPtr, int* maxPtr) {
    if (values.empty()) {
        throw std::invalid_argument("The vector is empty.");
    }

    *minPtr = values[0];
    *maxPtr = values[0];

    for (const auto& value : values) {
        if (value < *minPtr) {
            *minPtr = value;
        }
        if (value > *maxPtr) {
            *maxPtr = value;
        }
    }

}

int main() {
    std::vector<int> values;
    int input, minVal, maxVal;

    std::cout << "Gib ganze Zahlen ein (mit 'q' beenden):\n";

    while (std::cin >> input) {
        values.push_back(input);
    }

    std::cin.clear();  // stream zurücksetzen (wegen 'q')
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << std::format("Du hast {} Zahlen eingegeben.\n", values.size());

    // Jetzt kannst du getMinMax(values) aufrufen 👍
    getMinMax(values, &minVal, &maxVal);
    std::cout << std::format("Min: {}, Max: {}\n", minVal, maxVal);


    return 0;
}
