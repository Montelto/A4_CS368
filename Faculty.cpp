//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// Made in CLion with commits to GitHub
//

#include "Faculty.h"

Faculty::Faculty(): Employee("Unknown faculty", -1, classType::FAC, NULL, 0),
                Person("Unknown faculty", -1, classType::FAC, NULL) {
    publications = 0;
}

Faculty::Faculty(string name, int ID, classType type, vector<int> *courseId,
                 int officeNum, int publications): Employee (name, ID, type,
                         courseId, officeNum), Person(name, ID, type,
                                 courseId) {
    this->publications = publications;
}

void Faculty::displayDetails() {
    Employee::displayDetails();
    cout << "Courses taught: ";
    if (Faculty::getCourseID() != NULL)
        for (auto itr : *Faculty::getCourseID())
            cout << itr << " ";
    cout << endl;
    cout << "Number of publications: " << publications << endl;
}
