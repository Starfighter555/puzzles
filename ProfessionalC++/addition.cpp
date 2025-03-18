# include <iostream>
using namespace std;

void addition(int a, int b);

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    addition(a, b);
    return 0;
}

void addition(int a, int b){
    cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
}