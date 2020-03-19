//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// Made in CLion with commits to GitHub
//

#include "Person.h"

Person::Person() {
    name = "Unknown person";
    ID = -1;
    courseId = nullptr;
    type = PER;
}

Person::Person(string name, int ID, vector<int> *courseId, classType type) {
    this->name = name;
    this->ID = ID;
    this->type = type;
    this->courseId = courseId;
}

void Person::displayDetails() {
    cout << endl;
    switch (getClassType()) {
        case PER:
            cout << "Person" << endl;
            break;
        case EMP:
            cout << "Employee" << endl;
            break;
        case STU:
            cout << "Student" << endl;
            break;
        case FAC:
            cout << "Faculty" << endl;
            break;
        case TA:
            cout << "TA" << endl;
            break;
    }
    cout << "Name: " << name << endl;
    cout << "ID: " << ID << endl;
}

vector<int>* Person::getCourseId() {
    return courseId;
}

classType Person::getClassType() {
    return type;
}

string Person::getName() {
    return name;
}
