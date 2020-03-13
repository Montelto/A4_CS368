//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// https://www.geeksforgeeks.org/multiple-inheritance-in-c/ for diamond problem
// Made in CLion with commits to GitHub
//

#include "DisplayUtility.h"

void displayAllStudentNames (vector <Person *> v, int courseID){
    cout << endl;
    for (auto person: v) {
        if (person->getClassType() == classType::STU)
            for (auto course: *person->getCourseID()){
                if (course == courseID)
                    cout << person->getName() << endl;
            }
    }
}

void displayAllPersonNames (vector <Person *> v, int courseID){
    cout << endl;
    for (auto person: v) {
        for (auto course: *person->getCourseID()){
            if (course == courseID)
                cout << person->getName() << endl;
        }
    }
}