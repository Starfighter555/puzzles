# include <iostream>
using namespace std;

int main(){

    for (int i = 1; i <=100; i++){
        if (i == 1) {
            cout << i << " foot is " << i * 0.3048 << " meters" << endl;
        }
        else {
            cout << i << " feet are " << i * 0.3048 << " meters" << endl;
            if (i % 10 == 0) {
                cout << endl;
            }
        }

    }

    return 0;
}

