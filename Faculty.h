//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// Made in CLion with commits to GitHub
//

#ifndef A4_CS368_FACULTY_H
#define A4_CS368_FACULTY_H

#include "Employee.h"

class Faculty: public Employee {
private:
    int publications;

public:
    Faculty();
    Faculty(string name, int ID, classType type, vector<int> *courseId,
            int officeNum, int publications);

    void displayDetails() override;
};

#endif //A4_CS368_FACULTY_H
