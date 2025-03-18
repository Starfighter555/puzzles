#include <iostream>

void addition(int a, int b);

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    addition(a, b);
}

void addition(int a, int b) {
    std::cout << "The sum of " << a << " and " << b << " is " << a + b << std::endl;
    /*std::print << "The sum of " << a << " and " << b << " is " << a + b << std::endl; 
    noch nicht unterstütz*/
}
