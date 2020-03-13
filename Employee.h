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

class Employee: virtual public Person {
private:
    int officeNum;

public:
    Employee();
    Employee(string name, int ID, classType type, vector<int>* courseId, int
    officeNum);

    virtual void displayDetails();

    friend class TeachingAssistant;
};

#endif //A4_CS368_EMPLOYEE_H
