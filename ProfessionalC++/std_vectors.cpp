#include <iostream>
#include <vector>
#include <ranges>
#include <format>
using namespace std;

int main(){
     // Create a vector of integers.
    vector<int> myVector { 11, 22 };
    for (int num : views::all(myVector)) {
        cout << num << endl;
    }
    cout << "\n";

    // Add some more integers to the vector using push_back().
    myVector.push_back(33);
    myVector.push_back(44);
    for (int num : views::all(myVector)) {
        cout << num << endl;
    }
    cout << "\n";
    
    // Access elements.
    cout << format("1st element: {}", myVector[0]) << endl;
    return 0;
}