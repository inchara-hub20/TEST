#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    float salary;
    string department;

public:
    // Default constructor
    Employee() {
        name = "Unknown";
        salary = 0.0;
        department = "General";
    }

    // Parameterized constructor
    Employee(string n, float s, string d) {
        name = n;
        salary = s;
        department = d;
    }

    // Display method
    void display() {
        cout << "\nEmployee Details:\n";
        cout << "Name      : " << name << endl;
        cout << "Salary    : " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    // Using default constructor
    Employee emp1;
    emp1.display();

    // Using parameterized constructor
    Employee emp2("Alice", 75000, "IT");
    emp2.display();

    return 0;
}
