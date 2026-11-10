#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
class Student : virtual public Person{
    string student_ID;
    string course_codes[7];
    int course_num;
    
    public:
    friend istream& operator>>(istream& in , Student & S);
    friend ostream& operator<<(ostream& output , Student S);
    Student(string id, string fn, string ph, Date bd);

    bool findCourseCode(string codeofcourse)const;
    
    void addNewCourse(string newcoursecode);
    void deleteCourse(string CourseCodeToDelete);
    void setID(string id);
    string getID()const;
    
    void printInfo() const;
    
    bool isMaxCourses() const;
}; 

#endif
