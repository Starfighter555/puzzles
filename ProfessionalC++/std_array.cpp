# include <iostream>
# include <array>   
using namespace std;

int main(){
    array<int, 3> arr { 9, 8, 7 };  // array of 3 integers
    cout << format("Array size = {}", arr.size()) << endl;  // Alwas use format like in Python !!
    cout << format("2nd element = {}", arr[1]) << endl;
    
    for (int num : arr) {  
        cout << num << endl;
    }
    
    return 0;
}