#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    Book(std::string title, int pages) : title_(title), pages_(pages) {}

    auto title() const { return title_; }                     // ❄️ nichts verändern
    void set_title(const std::string& title) { title_ = title; }

    auto pages() const { return pages_; }                     // ❄️ nichts verändern
    void set_pages(int pages) { pages_ = pages; }

private:
    std::string title_;
    int pages_;
};

// ✅ jetzt eine freie Funktion!
void print_book_info(const Book& book) {
    std::cout << book.title() << " has " << book.pages() << " pages.\n";

    // book.set_title("Hacked!");  // ❌ Compiler verhindert das – perfekt!
}

int main() {
    Book b{"C++ Fundamentals", 350};
    print_book_info(b);             // ✅ erlaubt

    const Book b2{"Clean Code", 250};
    print_book_info(b2);            // ✅ erlaubt (weil alles const)

    // b2.set_title("NOPE");       // ❌ Compilerfehler – const correctness funktioniert

    return 0;
}
