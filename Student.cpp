#include "Student.h"

istream& operator>>(istream& in, Student& S) {
    string temp1;
    getline(in, temp1);
    S.setName(temp1);
    
    getline(in, temp1);
    S.setNumber(temp1);
    
    Date temp2;
    in >> temp2;
    S.setDate(temp2);
    
    in.ignore();
    getline(in, S.student_ID);
    
    return in;
}

ostream& operator<<(ostream& output, Student S) {
    output << "Name: " << S.getName() << endl 
           << "Number: " << S.getNumber() << endl 
           << "Birth date: " << S.getDate();
    output << "Studnt ID: " << S.student_ID << endl;
    output << "Number of currntly registred courses: " << S.course_num << endl;
    output << "REgistred courses:\n";
    for(int i = 0; i < S.course_num; i++) {
        output << S.course_codes[i] << " ";
    }
    output << endl;
    return output;
}

Student::Student(string id, string fn, string ph, Date bd) : Person(fn, ph, bd) {
    student_ID = id;
    course_num = 0;
}

bool Student::findCourseCode(string codeofcourse) const {
    if(course_num == 0) {
        return false;
    } else {
        for(int i = 0; i < course_num; i++) {
            if(course_codes[i] == codeofcourse) {
                return true;
            }
        }
        return false;
    }
}

void Student::addNewCourse(string newcoursecode) {
    if(isMaxCourses()) {
        cout << "Error you have exceed the limit\n";
    } else {
        if(findCourseCode(newcoursecode)) {
            cout << "Error the course is alrady added\n";
        } else {
            course_codes[course_num] = newcoursecode;
            course_num++;
        }
    }
}

void Student::deleteCourse(string CourseCodeToDelete) {
    if(course_num == 0) {
        cout << "Error: No courses to delete\n";
    } else {
        if(findCourseCode(CourseCodeToDelete)) {
             for (int i = 0; i < course_num; i++) {
        if (course_codes[i] == CourseCodeToDelete) {
            for (int j = i; j < course_num - 1; j++) {
                course_codes[j] = course_codes[j + 1];
            }
            course_num--; 
            break;
        }
    }
        } else {
            cout << "Error the course not found\n";
        }
    }
}

void Student::setID(string id) {
    student_ID = id;
}

string Student::getID() const {
    return student_ID;
}

void Student::printInfo() const {
    Person::printInfo();
    cout << "Studnt ID: " << getID() << endl;
    cout << "Number of currntly registred courses: " << course_num << endl;
    cout << "REgistred courses:\n";
    for(int i = 0; i < course_num; i++) {
        cout << course_codes[i] << " ";
    }
    cout << endl;
}

bool Student::isMaxCourses() const {
    if(course_num == 7) {
        return true;
    } else {
        return false;
    }
}
