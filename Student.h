//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// Made in CLion with commits to GitHub
//

#ifndef A4_CS368_STUDENT_H
#define A4_CS368_STUDENT_H

#include "Person.h"

class Student: virtual public Person {
private:
    /*
     * grade for grades given
     * average for mean of the grades given
     */
    vector<float>* grade;
    float average;

    /*
     *  a private function to calculate the average of the grades
     */
    void calcAverage();

public:
    /*
     * Person constructor with the following values as default arguments:
     * Name : Unknown student
     * ID : -1
     * courseId : nullptr
     * type : STU
     * grade : nullptr
     */
    Student();

    /*
     * Person parametrized constructor
     */
    Student(string name, int ID, vector<int> *courseId, classType type,
            vector<float> *grade);

    /*
     * to  display  the  respective  class  member  variables  (displays
     * name, ID, type, courses, grades, average)
     */
    virtual void displayDetails();
};

#endif //A4_CS368_STUDENT_H
