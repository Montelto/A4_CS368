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

void Person::displayDetails() {
    cout << "Name: " << name << endl;
    cout << "ID: " << ID << endl;
    cout << "Type: Person" << endl;
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