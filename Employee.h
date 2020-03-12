//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// Made in CLion with commits to GitHub
//

#ifndef A4_CS368_EMPLOYEE_H
#define A4_CS368_EMPLOYEE_H

#include "Person.h"

int officeNum;

class Employee: private Person {
private:
    Employee();

    void virtual displayDetails();
};

#endif //A4_CS368_EMPLOYEE_H
