//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// Made in CLion with commits to GitHub
//

#include "Employee.h"

Employee::Employee(): Person("Unknown employee", -1, nullptr, EMP) {
    officeNum = 0;
}

Employee::Employee(string name, int ID, vector<int> *courseId, classType type,
                   int officeNum): Person(name, ID, courseId, type) {
    this->officeNum = officeNum;
}

void Employee::displayDetails() {
    Person::displayDetails();
    cout << "Office number: " << officeNum << endl;
}
