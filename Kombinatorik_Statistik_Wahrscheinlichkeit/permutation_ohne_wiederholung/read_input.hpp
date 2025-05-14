#ifndef READ_INPUT_HPP
#define READ_INPUT_HPP

#include <vector>
#include <string>
#include <sstream>

template <typename T>
std::vector<T> read_input() {
    std::vector<T> elements;
    std::string line;
    std::getline(std::cin >> std::ws, line); // Leerzeichen am Anfang entfernen
    std::istringstream iss(line);
    T value;
    while (iss >> value) {
        elements.push_back(value);
    }
    return elements;
}

#endif // READ_INPUT_HPP
