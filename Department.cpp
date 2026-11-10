#include "Department.h"


    Department::Department(string name , int num ){
        this->setDepartmentName(name);
        this->setNumEmployees(num);
    }
    void Department::setDepartmentName(string deptName){
        this->deptName = deptName;
    }
    void Department::setNumEmployees(int numEmployees){
        this->numEmployees = (numEmployees >= 0) ? numEmployees : 0;
    }
    string Department::getDepartmentName() const{
        return this->deptName;
    }
    int Department::getNumEmployees()const{
        return this->numEmployees;
    }
    void Department::printInfo() const{
        cout << "Department name: " << this->getDepartmentName() <<
        endl << "Number of employees: " << this->getNumEmployees() << endl;
    }
    Department Department::operator+(const Department& other){
        Department merged;
        merged.setDepartmentName(  "Merged: " + this->getDepartmentName()+ "& " + other.getDepartmentName());
        merged.setNumEmployees(this->getNumEmployees() + other.getNumEmployees());
        return merged;
    }
