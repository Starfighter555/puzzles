#include <iostream>
#include <forward_list>
#include <algorithm>  // Für std::count
#include <string>

int num_hamlet(const std::forward_list<std::string>& books) {
    return std::count(books.begin(), books.end(), "Hamlet");
}

int main() {
    std::forward_list<std::string> words {
        "To", "be", "or", "not", "to", "be", "Hamlet", "Hamlet", "Hamlet", "King", "Hamlet"
    };

    std::cout << "Anzahl von 'Hamlet': " << num_hamlet(words) << "\n";
    return 0;
}
