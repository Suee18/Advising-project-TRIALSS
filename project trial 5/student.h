#pragma once

#include <string>
#include "course.h"
using namespace std;

class Student {
private:
     static const int maxCourses = 10;
    int id;
    int semester;
    string courses[maxCourses];
    int creditHours[maxCourses];
    int numCourses;
    int totalCreditHours;
    string StudentSpeciality;

public:
    //getting privv info
    int getId();
    int getSemester();
    int getTotalCreditHours();
    string getStudentSpeciality();/*done*/

    //storing student info fn 
    Student(int id, int semester,string speciality,int totalCreditHours);

    //checking for valid courses
    bool isCourseValid(course course);/*done*/

    //checking if credit hours match the subject code
    course* getAvailableCourses(course courses[], int numCourses);


    //ALAA!!
   //adding courses function
  
};


