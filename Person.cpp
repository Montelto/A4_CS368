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
    courseId = NULL;
    type = classType::PER;
}

Person::Person(string name, int ID, classType type, vector<int> *courseId) {
    this->name = name;
    this->ID = ID;
    this->type = type;
    this->courseId = courseId;
}



void Person::displayDetails() {
    cout << endl;
    switch (getClassType()) {
        case classType::PER:
            cout << "Person" << endl;
            break;
        case classType::EMP:
            cout << "Employee" << endl;
            break;
        case classType::STU:
            cout << "Student" << endl;
            break;
        case classType::FAC:
            cout << "Faculty" << endl;
            break;
        case classType::TA:
            cout << "TA" << endl;
            break;
    }
    cout << "Name: " << name << endl;
    cout << "ID: " << ID << endl;
}

vector<int>* Person::getCourseID() {
    return courseId;
}

classType Person::getClassType() {
    return type;
}

string Person::getName() {
    return name;
}