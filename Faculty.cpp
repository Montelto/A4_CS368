//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// Made in CLion with commits to GitHub
//

#include "Faculty.h"

Faculty::Faculty(): Employee("Unknown faculty", -1, nullptr, FAC, 0),
                Person("Unknown faculty", -1, nullptr, FAC) {
    publications = 0;
}

Faculty::Faculty(string name, int ID, vector<int> *courseId, classType type,
                 int officeNum, int publications): Employee (name, ID,
                         courseId, type, officeNum), Person(name, ID,
                                 courseId, type) {
    this->publications = publications;
}

void Faculty::displayDetails() {
    Employee::displayDetails();
    cout << "Courses taught: ";
    if (getCourseId() != nullptr)
        for (auto itr : *getCourseId())
            cout << itr << " ";
    cout << endl;
    cout << "Number of publications: " << publications << endl;
}
