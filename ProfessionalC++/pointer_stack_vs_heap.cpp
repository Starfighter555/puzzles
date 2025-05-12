#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    // 🔹 STACK: Objekt direkt erstellt
    Point stackPoint {1, 2};
    Point* ptrToStack = &stackPoint;

    // 🔸 HEAP: Objekt dynamisch mit new erstellt
    Point* ptrToHeap = new Point{3, 4};

    // 🔍 Ausgabe
    std::cout << "STACK:\n";
    std::cout << "  stackPoint: (" << stackPoint.x << ", " << stackPoint.y << ")\n";
    std::cout << "  ptrToStack points to: (" << ptrToStack->x << ", " << ptrToStack->y << ")\n";

    std::cout << "\nHEAP:\n";
    std::cout << "  ptrToHeap points to: (" << ptrToHeap->x << ", " << ptrToHeap->y << ")\n";

    // 🧹 Speicher vom Heap freigeben
    delete ptrToHeap;

    return 0;
}
