#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>
using namespace std;
class Department{
    string deptName;
    int numEmployees;
    public:
    Department(string name = "Unknown", int num = 0);
    void setDepartmentName(string deptName);
    void setNumEmployees(int numEmployees);
    string getDepartmentName() const;
    int getNumEmployees()const;
    void printInfo() const;
    Department operator+(const Department& other);
};

#endif
