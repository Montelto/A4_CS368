//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// Made in CLion with commits to GitHub
//

#ifndef A4_CS368_DISPLAYUTILITY_H
#define A4_CS368_DISPLAYUTILITY_H

#include "Faculty.h"
#include "TeachingAssistant.h"

/*
 * This function takes the reference to a vector of Person * type and
 * iterates over it. It displays only the name of the students who have taken
 * the courseID (argument).
 */
void displayAllStudentNames (vector <Person *> v, int courseID);

/*
 * This function takes the reference to a vector of Person * type and
 * iterates over it. It displays the name of the students, TA and faculty
 * associated with the courseID (argument).
 */
void displayAllPersonNames (vector <Person *> v, int courseID);

#endif //A4_CS368_DISPLAYUTILITY_H
