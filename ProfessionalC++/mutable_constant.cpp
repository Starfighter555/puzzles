#include <iostream>
using namespace std;

int main() {
    const int value = 42;
    const int* ptr = &value;

// Versuch, Wert zu ändern → Compilerfehler
// *ptr = 99;  ❌ Error: assignment of read-only location ‘*ptr’

    cout << "value: " << *ptr << endl;  // Gibt: 42

    return 0;
}
