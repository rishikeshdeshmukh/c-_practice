#include <iostream>
using namespace std;

class Employee {
public:
    virtual void accept() = 0;
    virtual void display() = 0;
    virtual float computeSalary() = 0;
    virtual ~Employee() {}
};

class WageEmployee : public Employee {
private:
    string name;
    float hoursWorked;
    float hourlyRate;

public:
    void accept() override {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter hours worked: ";
        cin >> hoursWorked;
        cout << "Enter hourly rate: ";
        cin >> hourlyRate;
    }

    void display() override {
        cout << "Name: " << name << endl;
        cout << "Hours worked: " << hoursWorked << endl;
        cout << "Hourly rate: $" << hourlyRate << endl;
        cout << "Salary: $" << computeSalary() << endl;
    }

    float computeSalary() override {
        return hoursWorked * hourlyRate;
    }
};

int main() {
    // Create WageEmployee object on heap
    Employee* empPtr = new WageEmployee();

    // Call accept, display, and computeSalary through Employee class pointer
    empPtr->accept();
    empPtr->display();

    // Free memory for object created on heap
    delete empPtr;

    // Make the Employee class as abstract and create a pointer of the abstract class
    // that holds the object of the derived class
    Employee* abstractEmpPtr = new WageEmployee();
    abstractEmpPtr->accept();
    abstractEmpPtr->display();

    // Free memory for object created on heap
    delete abstractEmpPtr;

    return 0;
}
