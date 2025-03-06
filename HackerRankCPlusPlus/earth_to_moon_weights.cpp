#include <iostream>
using namespace std;

int main() {
    double gravity_factor = 0.167;  // Tippfehler behoben

    for (int i = 1; i <= 100; i++) {  // i <= 100, damit 100 mit ausgegeben wird
        // Singular/Plural richtig behandeln
        cout << i << (i == 1 ? " earth pound is " : " earth pounds are ") 
             << i * gravity_factor << " moon pounds" << endl;

        // Leerzeile nach jeder 25. Zeile
        if (i % 25 == 0) {
            cout << endl;
        }
    }
    
    return 0;
}
