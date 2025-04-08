#include <iostream>
#include <vector>
#include <string>

class Bagel {
public:
    Bagel(std::vector<std::string> toppings)
        : toppings_(std::move(toppings)) {}

    void print() const {
        for (const auto& t : toppings_)
            std::cout << t << " ";
        std::cout << "\n";
    }

private:
    std::vector<std::string> toppings_;
};

int main() {
    std::vector<std::string> t = {"salz"};

    Bagel a(t);  // bekommt {"salz"}
    Bagel b(t);  // bekommt {"salz"}

    t.push_back("pfeffer");  // t ist jetzt {"salz", "pfeffer"}

    Bagel c(t);  // bekommt {"salz", "pfeffer"}

    std::cout << "a: "; a.print();  // ✅ salz
    std::cout << "b: "; b.print();  // ✅ salz
    std::cout << "c: "; c.print();  // ✅ salz pfeffer
}
