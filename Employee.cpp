//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// Made in CLion with commits to GitHub
//

#include "Employee.h"

Employee::Employee() {
    type = classType::EMP;
    officeNum = 0;
}

void Employee::displayDetails() {
    cout << "Office Number: " << officeNum << endl;
}