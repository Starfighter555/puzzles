#include <iostream>
#include <compare>  // Spaceship-Operator benötigt <compare>
using namespace std;

int main() {
    int i { 11 };
    float j { 3.1415 };

    /* Strong ordering with integer */
    strong_ordering result { i <=> 0 };

    if (result == strong_ordering::less) { cout << "less" << endl; }
    if (result == strong_ordering::greater) { cout << "greater" << endl; }
    if (result == strong_ordering::equal) { cout << "equal" << endl; }

    /* Partial ordering with floating point */
    partial_ordering resultFloat { j <=> 3.0 };

    if (resultFloat == partial_ordering::less) { cout << "less" << endl; }
    if (resultFloat == partial_ordering::greater) { cout << "greater" << endl; }
    if (resultFloat == partial_ordering::equivalent) { cout << "equivalent" << endl; }
    if (resultFloat == partial_ordering::unordered) { cout << "unordered" << endl; }


    return 0;
}
