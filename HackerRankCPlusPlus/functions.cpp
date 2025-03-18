#include <iostream>
#include <algorithm>  // ✅ Notwendig für std::max()

using namespace std;

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max_of_four(a, b, c, d) << "\n";  // Direkt ausgeben
}

int max_of_four(int a, int b, int c, int d) {
    return max({a, b, c, d});  // ✅ Offiziell standardisiert in C++23
}
// ✅ Funktioniert auch in C++17 und C++20