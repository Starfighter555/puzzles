#include <iostream>
#include <format>


int main(){
    auto counter {0};
    while (counter < 10){
        std::cout << std::format("Counter: {}\n", counter);
        std:: cout << "This is silly." << std::endl;
        ++counter;
    }
    return 0;
}