//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// Made in CLion with commits to GitHub
//

#include "Student.h"

Student::Student(): Person("Unknown student", -1, classType::STU, NULL) {
    grade = NULL;
    average = 0;
}

Student::Student(string name, int ID, classType type, vector<int> *courseId,
                 vector<float> *grade): Person(name, ID, type, courseId) {
    this->grade = grade;
    calcAverage();
}

void Student::displayDetails() {
    Person::displayDetails();
    cout << "Courses and grades: ";
    if (Student::getCourseID() != NULL && grade != NULL) {
        const vector<int> &courses = *Student::getCourseID();
        const vector<float> &grades = *grade;
        for (int i = 0; i < courses.size() && i < grades.size();
             ++i) {
            cout << courses[i] << ":" << grades[i];
        }
    }
    cout << "\nAverage: " << average << endl;
}

void Student::calcAverage() {
    float total = 0;
    float numGrades = 0;
    if (grade != NULL)
        for (auto itr : *grade) {
            total += itr;
            numGrades += 1;
        }
    if (numGrades == 0)
        numGrades = 1;
    average = total/numGrades;
}


