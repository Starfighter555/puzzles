# include <iostream>
using namespace std;

int main(){
    cout << "first array: \n";
    int my_array_1[3] = {0};
    for (int i = 0; i < 3; i++){
        cout << my_array_1[i] << endl;
    }
    
    cout << "second array: \n";
    int my_array_2[3] = {};
    for (int i = 0; i < 3; i++){
        cout << my_array_2[i] << endl;
    }
    
    cout << "third array: \n";
    int my_array_3[] = {1, 2, 3, 4};
    size_t arraySize { sizeof(my_array_3) / sizeof(my_array_3[0]) };
    cout << "Number of elements: " << arraySize << endl;

    for (int i = 0; i < arraySize; i++){
        cout << my_array_3[i] << endl;
    }
    
    return 0;
}