#include <iostream>
using namespace std;

int value() {
    return 10;
}

namespace NS {
    int value() {
        return 20;
    }
}

class Demo {
public:
    int value() {
        return 30;
    }
};

int main() {
    Demo d;

    cout << value() << endl;
    cout << ::value() << endl;
    cout << NS::value() << endl;
    cout << d.value() << endl;

    return 0;
}
