//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// https://www.geeksforgeeks.org/multiple-inheritance-in-c/ for diamond problem
// Made in CLion with commits to GitHub
//

#include "TeachingAssistant.h"

TeachingAssistant::TeachingAssistant(): Student("Unknown TA", -1, nullptr, TA,
        nullptr), Employee("Unknown TA", -1,
                nullptr, TA, 0), Person("Unknown TA", -1, nullptr, TA)  {
    officeHours = 0;
    TAcourse = 0;
}

TeachingAssistant::TeachingAssistant(string name, int ID, vector<int>
        *courseId, classType type, vector<float> *grade, int officeNum, int
        officeHours, int TAcourse): Student (name, ID, courseId, type, grade)
        , Employee(name, ID, courseId, type, officeNum), Person(name, ID,
                courseId, type) {
    this->officeHours = officeHours;
    this->TAcourse = TAcourse;
}

void TeachingAssistant::displayDetails() {
    Student::displayDetails();
    cout << "Office number: " << officeNum << endl;
    cout << "Course TA: " << TAcourse << endl;
    cout << "Office hours: " << officeHours << endl;
}

