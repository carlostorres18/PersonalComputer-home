// The Project is a database that sorts students on different sections of a subject depending on, if their major is related to the subject
// EX: Major: Math Class: Calculus -- assigned to a class section with other students with Math major
// EX: Major: CS Class: Calculus -- assgined to a class section with other students of different majors

#include <iostream>
using namespace std;
#include "main.h"

int main(){
    // Student student1(92101, "Carlos", "Calculus");
    Student student2(92101, "Carlos", "ComputerScience");

    // student1.display();
    // student2.display();

    Course Cal("Cal 1", "MATH");
    Student Carlos(92101, "Carlos", "Calculus");
    Carlos.registerForSubject(Cal);
    Cal.addToSection(92101);
    Cal.addToSection(202);
    Cal.addToSection(18);
    // Cal.showAllStudents();
    Carlos.getID();
    Carlos.getID();

    Course CS1("CSCI 2830", "CS");
    Student example2(1818, "Example2", "CS");


    cout<<"creating manager: "<<endl;
    Manager example;
    example.addCourse(Cal);
    example.addCourse(CS1);

    cout<<"student example: "<<endl;
    example.enrollStudent(Carlos);
    example.enrollStudent(example2);


}