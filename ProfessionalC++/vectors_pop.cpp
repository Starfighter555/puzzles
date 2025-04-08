// Demonstriert das Entfernen des letzten Elements eines Vektors wie die funktion list.pop() in Python

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> myVector {10, 20, 30, 40};

    // Prüfen, ob der Vektor nicht leer ist
    if (!myVector.empty()) {
        // Letztes Element speichern
        int lastElement = myVector.back();

        // Letztes Element entfernen
        myVector.pop_back();

        // Ausgabe des entfernten Werts
        cout << "Removed value: " << lastElement << endl;
    } else {
        cout << "Vector is empty!" << endl;
    }

    // Aktueller Inhalt des Vektors nach dem Entfernen
    cout << "Remaining elements:" << endl;
    for (int n : myVector) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
