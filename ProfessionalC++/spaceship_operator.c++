# include <iostream>
using namespace std;

int main(){
    int i { 11 };
    float j {3.1415};

    /* Strong orderin with integer*/
    strong_ordering result { i <=> 0 };
    if (result == strong_ordering::less) { cout << "less" << endl; }
    if (result == strong_ordering::greater) { cout << "greater" << endl; }
    if (result == strong_ordering::equal) { cout << "equal" << endl; }

    /* Weak ordering with floatingpoint*/
}