//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// Made in CLion with commits to GitHub
//

#include "Employee.h"

Employee::Employee(): Person("Unknown employee", -1, classType::EMP, NULL) {
    officeNum = 0;
}

Employee::Employee(string name, int ID, classType type, vector<int> *courseId,
                   int officeNum): Person(name, ID, type, courseId) {
    this->officeNum = officeNum;
}

void Employee::displayDetails() {
    Person::displayDetails();
    cout << "Office number: " << officeNum << endl;
}
