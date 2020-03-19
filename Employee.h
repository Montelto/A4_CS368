//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// Made in CLion with commits to GitHub
//

#ifndef A4_CS368_EMPLOYEE_H
#define A4_CS368_EMPLOYEE_H

#include "Person.h"

class Employee: virtual public Person {
    /*
     * officeNum for office number.
     */
private:
    int officeNum;

public:
    /*
     * Person constructor with the following values as default arguments:
     * Name : Unknown employee
     * ID : -1
     * courseId : nullptr
     * type : EMP
     * officeNum : 0
     */
    Employee();

    /*
     * Person parametrized constructor
     */
    Employee(string name, int ID, vector<int> *courseId, classType type, int
    officeNum);

    /*
     *  a  pure  virtual  function  to  display  the  respective  class
     *  member variables (displays name, ID, type, officeNum)
     */
    virtual void displayDetails();

    /*
     * to allow direct access to officeNum
     */
    friend class TeachingAssistant;
};

#endif //A4_CS368_EMPLOYEE_H
