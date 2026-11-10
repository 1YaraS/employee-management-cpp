#ifndef PERSON_H
#define PERSON_H
#include "Date.h"
class Person {
    string full_Name;
    mutable string phoneNumber;
    Date BirthDate;
    friend void displayInfo(Person n);
public:
    Person() ;
    Person(string fn, string pn, const Date & bd);
    void setName(string n) ;
    void setNumber(string n) const ;
    void setDate(Date n) ;
    string getName()const ;
    string getNumber()const;
    Date getDate() const ;
    Date& editBD() ;
    void printInfo()const;
    int calculateAge(int currentYear) const ;
};

#endif
