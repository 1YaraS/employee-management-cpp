#include "StudentEmp.h"
#include <cmath>
#include "Department.h"

int main() {
 
    StudentEmp Std_employee1("Hatoon", "0555667788", Date(21,9,2001), "11215", 9000, "CS", "3322110");
    StudentEmp Std_employee2("Walah A", "0555447722", Date(1,2,1990), "54445", 4000, "IT", "3322110"); 

    double amount;
    cout << "Enter bonus amount: ";
    cin >> amount;
    
    Std_employee1 += amount;

    cout << "Enter deducted amount: ";
    cin >> amount;
    
    Std_employee2 -= amount;
    
    if(Std_employee1 > Std_employee2){
        cout << Std_employee1.getName() << " has higher salary detailes:\n";
        Std_employee1.printInfo();
    } else {
        cout << Std_employee2.getName() << " has higher salary detailes:\n";
        Std_employee2.printInfo();
    }
    
    
    if(Std_employee1.getDate() == Std_employee2.getDate()){
        cout << Std_employee1.getName() << " and " 
        << Std_employee2.getName() << " they have the same date\n";
    } else {
        cout << Std_employee1.getName() << " and " 
        << Std_employee2.getName() << " they don't have the same date\n"; 
    }
    
    cout << "\n\n";
    
    cout << "The difference between the two salaries: " << 
    abs(Std_employee1.getSalary() - Std_employee2.getSalary());
    
    cout << "\n\n";
    Std_employee1.printInfo();
    
    cout << "\n\n";
    Std_employee2.printInfo();
    
    cout << "\n\n";
    cout << "Enter Std_employee1 courses to be added:\n";
    cin.ignore();
        string course;
        getline(cin, course);
        Std_employee1.addNewCourse(course);
    
    cout << "\n\n";
    Std_employee1.printInfo();
    cout << "\n\n";
    
    cout << "Enter Std_employee1 course to be deleted:\n";
    getline(cin, course);
    Std_employee1.deleteCourse(course);
    cout << "\n\n";
    Std_employee1.printInfo();
    cout << "\n\n";
    
    Department dep1("Computer Science", 20 );
    Department dep2("Information Technology", 15 );
    
    Department merged = dep1 + dep2;
    
    merged.printInfo();
    return 0;
}
