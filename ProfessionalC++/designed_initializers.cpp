# include <iostream>

struct Student {
    std::string name;
    int age = 18;
    double grade = 0.0;
};

int main() {
    // Using default constructor
    Student student1;
    std::cout << "Student 1: " << student1.name << ", " << student1.age << ", " << student1.grade << std::endl;

    // Using designated initializer
    Student student2 = { .name = "Alice", .age = 20, .grade = 3.5 };
    std::cout << "Student 2: " << student2.name << ", " << student2.age << ", " << student2.grade << std::endl;

    Student Oreschnik = {.name = "Oreschnik"};
    std::cout << "Oreschnik: " << Oreschnik.name << std::endl;

    Student Lina = {.name = "Lina", .age = 20, . grade = 1.5};
    std::cout << "Lina: " << Lina.name << ", " << Lina.age << ", " << Lina.grade << std::endl;

    return 0;
}