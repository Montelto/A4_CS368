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

/*
 * Class Type fields to determine the persons belonging role.
 */
enum class classType{PER, EMP, STU, FAC, TA};

class Person {
    /*
     * name for person name.
     * ID for Student ID
     * type for person role.
     * courseId for courses person is related with.
     */
private:
    string name;
    int ID;
    classType type;
    vector<int>* courseId;

public:
    /*
     * Person constructor with the following values as default arguments:
     * Name : Unknown person
     * ID : -1
     * courseId : nullptr
     * type : PER
     */
    Person();

    /*
     * Person parametrized constructor
     */
    Person(string name, int ID, classType type, vector<int>* courseId);

    /*
     * a  pure  virtual  function  to  display  the  respective  class member
     * variables (displays name, ID, type)
     */
    virtual void displayDetails();

    /*
     * a  getter  function  to  return  the  courseId  member variable
     */
    vector<int>* getCourseID();

    /*
     * a getter function to return the type member variable
     */
    classType getClassType();

    /*
     * a getter function to return the name member variable
     */
    string getName();
};

#endif //A4_CS368_PERSON_H
