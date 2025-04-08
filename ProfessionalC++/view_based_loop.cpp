#include<iostream>
#include<ranges>

int main(){
    for (int i : std::views::iota(1, 5)) {
        std::cout << i << '\n';
    }
    
    return 0;
}