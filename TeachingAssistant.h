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

class TeachingAssistant: public Employee, Student  {
private:
    int officeHours;
    int TAcourse;

public:
    TeachingAssistant();
    TeachingAssistant(string name, int ID, classType type, vector<int>*
            courseId, vector<float> *grade, int officeNum, int officeHours,
            int TAcourse);

    void displayDetails() override;
};

#endif //A4_CS368_TEACHINGASSISTANT_H
