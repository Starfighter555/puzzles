#include <iostream>
#include <utility>   // ✅ für std::pair
#include <format>    // ✅ für std::format
using namespace std;

int main(){

    pair<double, int> myPair { 1.23, 5 };
    cout << format("{} {}\n", myPair.first, myPair.second);

    pair<double, string> myPair2 { 1.23, "Hello Oreschnik!"};
    cout << format("{} {}\n", myPair2.first, myPair2.second);

    return 0;
}