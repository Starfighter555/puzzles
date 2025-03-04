# include <iostream>
using namespace std;

int main(){
    double meters;
    cout << "Enter the value in meters: ";
    cin >> meters;
    cout << "The value in feet is: " << meters / 0.3048 << endl;
    return 0;
}