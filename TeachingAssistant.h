//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// Made in CLion with commits to GitHub
//

#ifndef A4_CS368_TEACHINGASSISTANT_H
#define A4_CS368_TEACHINGASSISTANT_H

#include "Employee.h"
#include "Student.h"

int officeHours;
int TAcourse;

class TeachingAssistant: private Employee, Student {
private:
    TeachingAssistant();

    void displayDetails();
};

#endif //A4_CS368_TEACHINGASSISTANT_H
