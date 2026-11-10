#ifndef STDEMPLOYEE_H
#define STDEMPLOYEE_H

#include "Student.h"
#include"Employee.h"
class StudentEmp: public Student, public Employee{
    public:
    StudentEmp(string fn, string ph, const Date &bd, string id, 
    double sal, string dept, string studentId);
    void printInfo()const;
};


#endif
