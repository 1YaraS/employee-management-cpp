#include "Date.h"

    bool Date::operator == (const Date &D1)const{
        if(this->day == D1.day && this->month == D1.month && this->year == D1.year)
            return true;
        else
            return false;
    }
    ostream& operator<<(ostream& output ,Date D){
        output << D.day << "/" << D.month << "/" << D.year << endl;
        return output;
    }
    istream& operator>>(istream& in ,Date& D){
        in >> D.day >> D.month >> D.year;
        return in; 
    }
    Date::Date(int d, int m , int y ) {
        setDay(d);
        setMonth(m);
        setYear(y);
        cout << "Date parameterized constructor runs\n";
    }
    Date::~Date() {
        cout << "Date Destructor runs\n";
    }
    void Date::setDay(int d) {
        day = (d >= 1 && d <= 30) ? d : 1;
    }
    void Date::setMonth(int m) {
        month = (m >= 1 && m <= 12) ? m : 1;
    }
    void Date::setYear(int y) {
        year = (y >= 1980 && y <= 2025) ? y : 2000;
    }
    int Date::getDay()const {
        return day;
    }
    int Date::getMonth() const {
        return month;
    }
    int Date::getYear() const {
        return year;
    }
    void Date::printDate() {
        cout << getDay() << "/" << getMonth() << "/" << getYear() << endl;
    }
    bool Date::is_earliest(const Date &D1)const {
        if(getYear() < D1.getYear()) {
            return true;
        } else if(getYear() == D1.getYear() &&
                  getMonth() < D1.getMonth()) {
            return true;
        } else if(getYear() == D1.getYear() &&
                  getMonth() == D1.getMonth() &&
                  getDay() < D1.getDay()) {
            return true;
        } else {
            return false;
        }
    }
