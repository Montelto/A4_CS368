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
    vector<float>* grade;
    float average;

    void calcAverage();

public:
    Student();
    Student(string name, int ID, classType type, vector<int>* courseId,
            vector<float> *grade);

    virtual void displayDetails();
};

#endif //A4_CS368_STUDENT_H
