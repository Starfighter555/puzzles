#include <iostream>
#include <format>
#include "employee.hpp"  // ✅ Funktioniert mit allen Compilern

using namespace std;

int main()
{
   // Create and populate an employee.
   Employee anEmployee;
   anEmployee.firstInitial = 'J';
   anEmployee.lastInitial = 'D';
   anEmployee.employeeNumber = 42;
   anEmployee.salary = 80000;
   // Output the values of an employee.
   cout << format("Employee: {}{}", anEmployee.firstInitial, 
       anEmployee.lastInitial) << endl;
   cout << format("Number: {}", anEmployee.employeeNumber) << endl;
   cout << format("Salary: ${}", anEmployee.salary) << endl;
}