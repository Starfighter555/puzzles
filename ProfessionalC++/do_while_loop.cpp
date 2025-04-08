#include<iostream>
# include<format>
using namespace std;

int main(){
    auto i {0};
    do {
        cout << format("i = {}\n", i);
        cout << "This is silly ;-)\n";
        i++;
    } while (i < 5);
    return 0;
}