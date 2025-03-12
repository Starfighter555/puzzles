#include <format>  // Wichtig für std::format
#include <iostream>
#include <limits>
using namespace std;

int main(){
    cout << "int:\n";
    cout << std::format("Max int value: {}\n", numeric_limits<int>::max());
    cout << format("Min int value: {}\n", numeric_limits<int>::min());
    cout << format("Lowest int value: {}\n", numeric_limits<int>::lowest());

    cout << "\ndouble:\n";
    cout << format("Max double value: {}\n", numeric_limits<double>::max());
    cout << format("Min double value: {}\n", numeric_limits<double>::min());
    cout << format("Lowest double value: {}\n", numeric_limits<double>::lowest());


    return 0;
}