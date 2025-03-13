#include <iostream>
using namespace std;

int main(){
    int someInteger { 256 };
    short someShort;
    long someLong;
    float someFloat;
    double someDouble;

    someInteger++;
    cout << someInteger << endl;

    someInteger *= 2;
    cout << someInteger << endl;

    someShort = static_cast<short>(someInteger);
    cout << someShort << endl;

    someLong = someShort * 10000;
    cout << someLong << endl;

    someFloat = someLong + 0.785f;
    cout << someFloat << endl;
    
    someDouble = static_cast<double>(someFloat) / 100000;
    cout << someDouble << endl;

    return 0;
}
