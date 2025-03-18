# include <iostream>
# include <format>

using namespace std;

int add_numbers(int a, int b);

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int sum { add_numbers(a, b) };
    std::cout << std::format("The sum of {} and {} is {}.\n", a, b, sum);
    return 0;
}

int add_numbers(int a, int b) {
    return a + b;
}