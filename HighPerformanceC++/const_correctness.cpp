#include <iostream>
#include <string>

class Person {
public:
    Person(std::string name, int age) : name_(name), age_(age) {}

    int age() const { return age_; }              // ❄️ garantiert: nichts wird verändert
    void set_age(int age) { age_ = age; }

private:
    std::string name_;
    int age_;
};

class Team {
public:
    Team(Person leader) : leader_(leader) {}

    Person& leader() { return leader_; }               // ⚠️ erlaubt Veränderungen
    const Person& leader() const { return leader_; }   // ❄️ erlaubt nur Lesen

private:
    Person leader_;
};
