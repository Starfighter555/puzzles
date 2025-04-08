#include <iostream>
#include <array>

int main(){
    for (std::array arr { 1, 2, 3, 4 }; int i : arr) { std::cout << i << std::endl; };
    
    return 0;
}