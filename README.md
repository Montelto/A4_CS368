# A4_CS368
# Joseph McFarland
# 9072511679
# mcfarland3@wisc.edu

*Created in CLion and pushed to Github*

A4_CS368 is made up of 13 files; Person.h, Person.cpp,  Employee.cpp
, Employee.h, Student.cpp, Student.h, Faculty.cpp, Faculty.h
, TeachingAssistant.cpp, TeachingAssistant.h, DisplayUtility.h
, DisplayUtility.cpp, demo.cpp
    
Person.h/Person.cpp are the base with base class Person with data members
 name, ID, type, and courseID, a default and parametrized constructor, a
  display details function, and getter functions to allow access to data
   members.

Employee.h/Employee.cpp with class Employee that inherits from Person has
 extra data member officeNum, default and parametrized constructor, and a
  display details function.
  
Student.h/Student.cpp with class Student that inherits form Person has extra
 data members grade and average, default and parametrized constructor, a
  display details function, and calc average private function.
  
Faculty.h/Faculty.cpp with class Faculty that inherits from Employee has
 extra data member publications, default and parametrized constructor, and a
  display details function.
 
TeachingAssistant.h/TeachingAssistant.cpp with class TeachingAssistant that
 inherits from Employee and Student has the extra data members officeHours
  and TAcourse, default and parametrized constructor, and a display details
   function.
   
DisplayUtility.h/DisplayUtility.cpp displays either all persons or only
 students who are associated with a given courseID with functions
  displayAllStudentNames and displayAllPersonNames respectively.

demo.cpp executes a test for all of A4_CS368 by calling all functions in
 order to create a properly formatted output file.
   
**make A4_CS368** 
