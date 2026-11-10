#include "StudentEmp.h"

    StudentEmp::StudentEmp(string fn, string ph, const Date &bd, string id, 
    double sal, string dept, string studentId) :
    Student(studentId, fn, ph, bd), Employee(fn, ph, bd, id, sal, dept), Person(fn, ph, bd){
        
    }
    void StudentEmp::printInfo()const{
        Student::printInfo();
        cout << "Employee ID: " << Employee::getID() << endl;
        cout << "Department: " << this->getDepartment() << endl;
        cout << "Salary: " << this->getSalary() << endl;
    }
