//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// https://www.geeksforgeeks.org/multiple-inheritance-in-c/ for diamond problem
// Made in CLion with commits to GitHub
//

#include "TeachingAssistant.h"

TeachingAssistant::TeachingAssistant(): Student("Unknown TA", -1,
        classType::TA, NULL, NULL), Employee("Unknown TA", -1, classType::TA,
                NULL, 0), Person("Unknown TA", -1, classType::TA, NULL)  {
    officeHours = 0;
    TAcourse = 0;
}

TeachingAssistant::TeachingAssistant(string name, int ID, classType type,
        vector<int> *courseId, vector<float> *grade, int officeNum, int
        officeHours, int TAcourse): Student (name, ID, type, courseId, grade)
        , Employee(name, ID, type, courseId, officeNum), Person(name, ID,
                type, courseId) {
    this->officeHours = officeHours;
    this->TAcourse = TAcourse;
}

void TeachingAssistant::displayDetails() {
    Student::displayDetails();
    cout << "Office number: " << officeNum << endl;
    cout << "Course TA: " << TAcourse << endl;
    cout << "Office hours: " << officeHours << endl;
}

