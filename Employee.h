#ifndef EMPLOYEE_H
#define EMPLOYEE_H


#include "Person.h"
class Employee : virtual public Person{
    string emp_Id;
    double salary;
    string department;
    public:
    void operator+=(double bonus);
    void operator-=(double Amountdeducted);
    bool operator>( const Employee& Emp);
    Employee(string fn, string ph, const Date &bd, string id, double sal, string dept);
    
    Employee();
    
    ~Employee();
    
    void setDepartment(string d);
    void setID(string id);
    void setSalary(double s);
    
    string getDepartment()const;
    string getID() const;
    
    double getSalary()const;
    
    bool hasHigherSalary(const Employee& Emp) const;
    void printInfo() const;
};

#endif
