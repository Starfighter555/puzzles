#include <iostream>
#include <vector>   
#include <format>

std::optional<std::tuple<int, int, double, double, double>> get_stats(const std::vector<int>& values);

std::optional<std::tuple<int, int, double, double, double>> get_stats(const std::vector<int>& values) {
    if (values.empty()) {
        return std::nullopt; // Return nullopt if the vector is empty
    }

    int min = values[0];
    int max = values[0];
    double sum = 0.0;

    for (int value : values) {
        if (value < min) {
            min = value;
        }
        if (value > max) {
            max = value;
        }
        sum += value;
    }

    double average = sum / values.size();

    std::vector<int> sorted = values;
    std::sort(sorted.begin(), sorted.end());
    size_t n = sorted.size();
    double median = n % 2 == 0 ? (sorted[n/2 - 1] + sorted[n/2]) / 2.0 : sorted[n/2];


    return std::make_tuple(min, max, average, sum, median);
}

int main(){
    std::vector<int> values;
    int input;

    std::cout << "Gib ganze Zahlen ein (mit 'q' beenden):\n";

    while (std::cin >> input) {
        values.push_back(input);
    }

    std::cin.clear();  // stream zurücksetzen (wegen 'q')
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << std::format("Du hast {} Zahlen eingegeben.\n", values.size());

    auto result = get_stats(values);

    std::cout << std::format("Min: {}, Max: {}, Average: {:.2f}, Sum: {:.2f}, Median: {:.2f}\n", 
        std::get<0>(*result), std::get<1>(*result), std::get<2>(*result), std::get<3>(*result), std::get<4>(*result));

    return 0;
}