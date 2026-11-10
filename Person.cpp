#include "Person.h"
    void displayInfo(Person n) {
        cout << "Name: " << n.full_Name <<
        endl << "Number: " << n.phoneNumber <<
        endl << "Birth date: "; n.BirthDate.printDate();
    }

    Person::Person() {
        full_Name = phoneNumber = "none";
    }
    Person::Person(string fn, string pn, const Date & bd) {
        full_Name = fn;
        phoneNumber = pn;
        BirthDate = bd;
    }
    void Person::setName(string n) {
        full_Name = n;
    }
    void Person::setNumber(string n) const {
        phoneNumber = n;
    }
    void Person::setDate(Date n) {
        BirthDate = n;
    }
    string Person::getName()const {
        return full_Name;
    }
    string Person::getNumber()const {
        return phoneNumber;
    }
    Date Person::getDate() const {
        return BirthDate;
    }
    Date& Person::editBD() {
        return BirthDate;
    }
    void Person::printInfo()const {
        cout << "Name: " << getName() <<
        endl << "Number: " << getNumber() <<
        endl << "Birth date: "; getDate().printDate();
    }
    int Person::calculateAge(int currentYear) const {
        return currentYear - getDate().getYear();
    }
