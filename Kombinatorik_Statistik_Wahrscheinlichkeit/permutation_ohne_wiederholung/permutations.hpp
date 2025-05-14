#ifndef PERMUTATIONS_HPP
#define PERMUTATIONS_HPP

#include <vector>
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <set>
#include <map>

/// Berechnet die Anzahl eindeutiger Permutationen, unter Berücksichtigung mehrfacher Elemente.
inline int count_unique_permutations(const std::vector<char>& elements) {
    std::map<char, int> freq;
    for (char c : elements) {
        freq[c]++;
    }

    int n = static_cast<int>(elements.size());
    int numerator = 1;
    for (int i = 2; i <= n; ++i) numerator *= i;

    int denominator = 1;
    for (auto& [_, count] : freq) {
        for (int i = 2; i <= count; ++i) denominator *= i;
    }

    return numerator / denominator;
}

/// Gibt alle eindeutigen Permutationen eines Vektors aus.
template <typename T>
void show_unique_permutations(const std::vector<T>& original) {
    std::vector<T> v = original;
    std::sort(v.begin(), v.end());

    std::set<std::vector<T>> unique_perms;
    do {
        unique_perms.insert(v);
    } while (std::next_permutation(v.begin(), v.end()));

    int count = 0;
    std::cout << "\nEindeutige Permutationen (je 3 pro Zeile):\n\n";
    for (const auto& perm : unique_perms) {
        std::cout << std::setw(2) << (++count) << ": ";
        for (const auto& x : perm) {
            std::cout << std::setw(3) << x;
        }
        std::cout << "    ";
        if (count % 3 == 0) std::cout << '\n';
    }
    if (count % 3 != 0) std::cout << '\n';
}

#endif // PERMUTATIONS_HPP
