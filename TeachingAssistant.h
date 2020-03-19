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
    /*
     * officeHours for the hours this person is available at their office
     * TAcourse for the course the TA is a TA
     */
    int officeHours;
    int TAcourse;

public:
    /*
     * Person constructor with the following values as default arguments:
     * Name : Unknown TA
     * ID : -1
     * courseId : nullptr
     * type : TA
     * grade : nullptr
     * officeNum : 0
     * officeHours : 0
     * TAcourse : 0
     */
    TeachingAssistant();

    /*
     * Person parametrized constructor
     */
    TeachingAssistant(string name, int ID, classType type, vector<int>*
            courseId, vector<float> *grade, int officeNum, int officeHours,
            int TAcourse);

    /*
     * to  display the  respective  class  member  variables  (displays name,
     * ID, type, courses and grade, average, officeNum, officeHours, TAcourse)
     */
    void displayDetails() override;
};

#endif //A4_CS368_TEACHINGASSISTANT_H
