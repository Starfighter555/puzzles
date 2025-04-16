#include <iostream>
using namespace std;

int x = 100;

int main() {
    int x = 50;
    cout << "x in main: " << x << endl;

    {
        int x = 20;
        cout << "x in inner block: " << x << endl;
    }

    cout << "x after block: " << x << endl;
    cout << "global x: " << ::x << endl;

    return 0;
}
