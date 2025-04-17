#include <iostream>
#include <utility> // for std::pair

// Deine Aufgabe:
// Schreibe eine Funktion, die zwei int-Werte nimmt
// und zwei Pointer, um min und max direkt zu setzen

void getMinMax(int a, int b, int* minPtr, int* maxPtr);

void getMinMax(int a, int b, int* minPtr, int* maxPtr) {
    if (a < b) {
        *minPtr = a;
        *maxPtr = b;
    } else {
        *minPtr = b;
        *maxPtr = a;
    }
}


int main(){
    int a, b;
    int minVal, maxVal;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
  
    getMinMax(a, b, &minVal, &maxVal);
    std::cout << "Min: " << minVal << ", Max: " << maxVal << "\n";
    return 0;
}