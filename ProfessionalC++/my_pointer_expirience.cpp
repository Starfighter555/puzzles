# include <iostream>
#include <format>

auto sum(const int* a, const int* b) -> int {
    return *a + *b;
}

int main(){
    // Alles liegt auf dem Stack
    std::cout << "alles liegt auf dem Stack\n";
    int a {10}; // a liegt auf dem Stacka
    std::cout << std::format("a: {}\n", a); // Ausgabe 10
    int* b = &a;    // b ist ein Pointer auf a
    std::cout << std::format("b: {}\n", *b); // Ausgabe 10
    *b = 20; // a wird auf 20 gesetzt
    std::cout << std::format("a: {}\n", a); // Ausgabe 20
    std::cout << std::format("b: {}\n", *b); // Ausgabe 20
    std::cout << std::format("Adresse von a: {}\n", static_cast<const void*>(&a));
    std::cout << std::format("Adresse von b (Pointer auf a): {}\n", static_cast<const void*>(b));

    int* c = new int{30}; // Speicher im Heap
    std::cout << "alles liegt auf dem Heap\n";
    std::cout << std::format("*c: {}\n", *c); // Jetzt korrekt: zeigt 30
    std::cout << std::format("Adresse von *c (Heap-Adresse): {}\n", static_cast<const void*>(c));

    std::cout << std::format("a: {}, *c: {}\n", a, *c);

    int result = sum(&a, c);
    std::cout << std::format("Summe (per Pointer): {}\n", result); // 40

    delete c;
    c = nullptr; // c ist jetzt ein Nullpointer
    // std::cout << std::format("c: {}\n", c); // Ausgabe 0

    return 0;
}
