//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// Made in CLion with commits to GitHub
//

#include "DisplayUtility.h"

/*
 * to test each function in all of A4_CS368
 */
int main() {
    Person personD;
    personD.displayDetails();

    Employee employeeD;
    employeeD.displayDetails();

    Student studentD;
    studentD.displayDetails();

    Faculty facultyD;
    facultyD.displayDetails();

    TeachingAssistant teachingAssistantD;
    teachingAssistantD.displayDetails();

    auto *courses = new vector<int>;
    courses->push_back(368);

    Person person("Peeps, The", 1, classType::PER, courses);
    person.displayDetails();

    Employee employee("Jo, Worker", 2, classType::EMP, courses, 10);
    employee.displayDetails();

    auto *grades = new vector<float>;
    grades->push_back(100);

    Student student("Ning, Lear", 3, classType::STU, courses, grades);
    student.displayDetails();

    Faculty faculty("Fessor, Pro", 4, classType::FAC, courses, 20, -1);
    faculty.displayDetails();

    TeachingAssistant teachingAssistant("Tor, Tu", 5, classType::TA, courses,
            grades, 30, 1200, 200);
    teachingAssistant.displayDetails();

    vector <Person *> people{&person, &employee, &student, &faculty,
                             &teachingAssistant};

    displayAllStudentNames(people, 368);

    displayAllPersonNames(people, 368);
}