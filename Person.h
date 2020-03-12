//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// Made in CLion with commits to GitHub
//

#ifndef A4_CS368_PERSON_H
#define A4_CS368_PERSON_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

enum class classType{PER, EMP, STU, FAC, TA};

string name;
int ID;
classType type;
vector<int>* courseId;

class Person {
protected:
    Person();

    void virtual displayDetails();

    vector<int>* getCourseID();

    classType getClassType();

    string getName();
};

#endif //A4_CS368_PERSON_H
