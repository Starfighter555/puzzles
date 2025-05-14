#include <iostream>
#include <thread>
#include <chrono>
#include <iomanip>

// Berechnet Anzahl eindeutiger Handshakes
int handshake_count(int n) {
    return n * (n - 1) / 2;
}

// Gibt alle Paare aus
void list_handshakes(int n) {
    std::cout << "\nAlle Handshake-Paare:\n";
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            std::cout << " - Person " << i << " schüttelt Hand mit Person " << j << '\n';
        }
    }
}

// Einfache ASCII-Animation eines Handschlags
void show_ascii_handshake() {
    using namespace std::chrono_literals;

    const std::string frames[] = {
    R"( o     o
/|\   /|\
 |     |
/ \   / \)",

    R"( o     o
\|/   \|/
 |     |
/ \   / \)",

    R"( o     o
/|\   /|\
 |     |
/ \   / \)"
};


    std::cout << "\nASCII-Animation:\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << "\033[2J\033[1;1H"; // Terminal clear
        std::cout << frames[i] << "\n\n";
        std::cout << "Formel: n(n-1)/2 = Anzahl Handshakes\n";
        std::this_thread::sleep_for(700ms);
    }
}

int main() {
    

    int n;
    std::cout << "\nWie viele Personen sind auf der Party? ";
    std::cin >> n;

    if (n < 2) {
        std::cout << "Es braucht mindestens zwei Personen für einen Handschlag.\n";
        return 0;
    }

    int count = handshake_count(n);
    
    list_handshakes(n);
    show_ascii_handshake();
    std::cout << "\nInsgesamt " << count << " eindeutige Handshakes.\n";

    return 0;
}

