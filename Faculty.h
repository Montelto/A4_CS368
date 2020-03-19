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
    /*
     * publications for number of publications made by this person
     */
    int publications;

public:
    /*
     * Person constructor with the following values as default arguments:
     * Name : Unknown faculty
     * ID : -1
     * courseId :nullptr
     * type : FAC
     * officeNum : 0
     * publications : 0
     */
    Faculty();

    /*
     * Person parametrized constructor
     */
    Faculty(string name, int ID, vector<int> *courseId, classType type,
            int officeNum, int publications);

    /*
     * o  display  the  respective  class  member  variables  (displays name,
     * ID, type, courses, officeNum, publications)
     */
    void displayDetails() override;
};

#endif //A4_CS368_FACULTY_H
