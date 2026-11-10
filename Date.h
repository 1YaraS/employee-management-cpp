#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {
private:
    int day, year, month;
public:
    bool operator == (const Date &D1)const;
    friend ostream& operator<<(ostream& output ,Date D);
    friend istream& operator>>(istream& in ,Date& D);
    Date(int d = 1, int m = 1, int y = 2000);
    ~Date();
    void setDay(int d) ;
    void setMonth(int m) ;
    void setYear(int y) ;
    int getDay()const ;
    int getMonth() const;
    int getYear() const ;
    void printDate();
    bool is_earliest(const Date &D1)const;
};
#endif
