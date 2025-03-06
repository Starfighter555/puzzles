# include <iostream>
using namespace std;

int main(){
    const double JOVIAN_TO_EARTH_RATIO = 11.86;

    double jovian_years;
    double earth_years;

    cout << "🚀 Enter the number of jovial years: ";
    cin >> jovian_years;
    if (cin.fail()) {  // Falls die Eingabe ungültig ist (z. B. Buchstaben statt Zahlen)
        cout << "❌ Invalid input. Please enter a number." << endl;
        return 1;  // Fehlercode zurückgeben
    }
    earth_years = jovian_years * JOVIAN_TO_EARTH_RATIO;
    cout << "🚀 " << jovian_years << " jovian years is equal to " 
        << earth_years << " earth years. 😊" << endl;

    return 0;
}