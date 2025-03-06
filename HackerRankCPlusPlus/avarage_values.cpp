# include <iostream>
# include <cstdlib>
using namespace std;

int main(){
    int a, b, c, d, e, sum;
    double average;
    sum = 0;
    cin >> a >> b >> c >> d >> e;
    sum = abs(a) + abs(b) + abs(c) + abs(d) + abs(e);
    average = sum / 5.0;
    cout << "The average of the absolute values of " << a << ", " << b << ", " 
         << c << ", " << d << ", " << e << " is: " << average << endl;

    return 0;
}