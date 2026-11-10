#include "Employee.h"
    
    void Employee::operator+=(double bonus){
        if(bonus > 0){
            this->salary += bonus;
        } else {
            cout << "Invalid bonus\n";
        }
    }
    void Employee::operator-=(double Amountdeducted){
        if(Amountdeducted > 0){
            if( (this->salary - Amountdeducted) < 0 ){
                cout << "Amount deducted is greater than the salary\n";
                cout << "Salary sets to ZERO\n";
                this->salary = 0;
            } else {
                this->salary -= Amountdeducted;
            }
        } else {
            cout << "Invalid amount deducted\n";
        }
    } 
    bool Employee::operator>( const Employee& Emp){
         return this->getSalary() > Emp.getSalary();
    }
    
    Employee::Employee(string fn, string ph, const Date &bd, string id, double sal, string dept) : 
    Person(fn, ph, bd){
        this->setDepartment(dept);
        this->setID(id);
        this->setSalary(sal);
    }
    
    Employee::Employee(){}
    
    Employee::~Employee(){}
    
    void Employee::setDepartment(string d){
        this->department = d;
    }
    void Employee::setID(string id){
        this->emp_Id = id;
    }
    void Employee::setSalary(double s){
        this->salary = (s >= 0)? s : 0;
        if(s < 0){
            cout << "Error negative salary we set it to zero\n";
        }
    }
    
    string Employee::getDepartment()const{
        return this->department;
    }
    string Employee::getID() const{
        return this->emp_Id;
    }
    
    double Employee::getSalary()const{
        return this->salary;
    }
    
    bool Employee::hasHigherSalary(const Employee& Emp) const{
        return this->getSalary() > Emp.getSalary();
    }
    void Employee::printInfo() const{
        Person::printInfo();
        cout << "Employee ID: " << this->getID() << endl;
        cout << "Department: " << this->getDepartment() << endl;
        cout << "Salary: " << this->getSalary() << endl;
    }
