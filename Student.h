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

vector<float>* grade;
float average;

class Student: private Person {
private:
    Student();

    void displayDetails();

    void calcAverage();
};

#endif //A4_CS368_STUDENT_H
