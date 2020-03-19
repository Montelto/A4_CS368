//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// Made in CLion with commits to GitHub
//

#include "Student.h"

Student::Student(): Person("Unknown student", -1, nullptr, STU) {
    grade = nullptr;
    average = 0;
}

Student::Student(string name, int ID, vector<int> *courseId, classType type,
                 vector<float> *grade): Person(name, ID, courseId, type) {
    this->grade = grade;
    calcAverage();
}

void Student::displayDetails() {
    Person::displayDetails();
    cout << "Courses and grades: ";
    if (getCourseId() != nullptr && grade != nullptr) {
        const vector<int> &courses = *getCourseId();
        const vector<float> &grades = *grade;
        for (int i = 0; i < courses.size() && i < grades.size();
             ++i) {
            cout << courses[i] << ":" << grades[i] << " ";
        }
    }
    cout << "\nAverage: " << average << endl;
}

void Student::calcAverage() {
    float total = 0;
    float numGrades = 0;
    if (grade != nullptr)
        for (auto itr : *grade) {
            total += itr;
            numGrades += 1;
        }
    if (numGrades == 0)
        numGrades = 1;
    average = total/numGrades;
}


