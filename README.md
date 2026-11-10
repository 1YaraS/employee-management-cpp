# University Academic & Payroll Management System (Modular C++)

## Overview
A multi-tier educational and administrative management system developed incrementally across coursework sessions in C++. The system models organizational structures including academic departments, students, employees, and hybrid student-employees (`StudentEmp`), tracking dates, salary adjustments, bonuses, and deductions.

---

## Architectural Breakdown & File Structure

The project strictly adheres to modular software design, separating class declarations (`.h`) from implementations (`.cpp`):

* `Date.h` / `Date.cpp`: Date validation, date arithmetic, and milestone tracking.
* `Person.h` / `Person.cpp`: Base entity providing common personal metadata and contact details.
* `Student.h` / `Student.cpp`: Academic tracking (GPA, registered hours, level).
* `Employee.h` / `Employee.cpp`: Administrative records, base salary, and payroll logic.
* `StudentEmp.h` / `StudentEmp.cpp`: Hybrid role inheriting both student and employee behaviors (Multiple/Diamond inheritance handling).
* `Department.h` / `Department.cpp`: Aggregates faculty, staff, and enrolled students under specific academic tracks.
* `main.cpp`: System orchestration, testing test cases, financial bonuses, deductions, and console reporting.

---

## Core OOP Concepts Applied
1. Modular Multi-File Architecture: Clean separation of concerns with header guards and modular compilation.
2. Hybrid / Multiple Inheritance: Modeling real-world intersection entities (`StudentEmp`).
3. Class Composition: Aggregating utility objects (such as `Date`) within core entity attributes.
4. Encapsulation & Operator Overloading: Safe state mutation for payroll calculations (bonus additions and penalty deductions).

---

## How to Compile
Compile all translation units together:
```bash
g++ *.cpp -o UniversitySystem
./UniversitySystem
