#include "student.h"
#include "course.h"
#include "iostream"

using namespace std;

int Student::getId() {
    return id;
}

int Student::getSemester() {
    return semester;
}

int Student::getTotalCreditHours() {
    return totalCreditHours;
}

string Student::getStudentSpeciality() {
    return StudentSpeciality;
}



Student::Student(int id, int semester,string speciality,int totalCreditHours) {
    this->id= id;
    this->semester= semester;
    this-> StudentSpeciality= speciality;
    numCourses = 0;
    this->totalCreditHours= totalCreditHours;
}





bool Student::isCourseValid(course course) {
    //if the course doesn't have a prerequiste then it is valid
    if ((course.preReq == "") && (course.CourseSpeciality==StudentSpeciality)) {
        return true;
    }

    //Check if the student has taken  prerequisite course
    for (int i = 0; i < numCourses; i++) {
        if (courses[i] == course.preReq) {
            return true;
        }
    }

    return false;
}


course* Student::getAvailableCourses(course courses[], int numCourses) {
    course* availableCourses = new course[numCourses];
    int numAvailableCourses = 0;

    for (int i = 0; i < numCourses; i++) {
        course currentCourse = courses[i];

        if (//credit hours and code condition
            (currentCourse.code.substr(0, 1) == "1") ||
            ((currentCourse.code.substr(0, 1) == "2") && (totalCreditHours >= 33)) ||
            ((currentCourse.code.substr(0, 1) == "3") && (totalCreditHours >= 69)) ||
            ((currentCourse.code.substr(0, 1) == "4") && (totalCreditHours >= 101)) )
        {

            //recurrsion to select only valid courses
            if (isCourseValid(currentCourse))
            {
                availableCourses[numAvailableCourses] = currentCourse;
                    numAvailableCourses++;
            }
        }
        


        return availableCourses;

    }
}






