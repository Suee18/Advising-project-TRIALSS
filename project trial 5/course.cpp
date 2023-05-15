#include "course.h"
#include "student.h"
#include "course.h"
#include "iostream"


using namespace std;

course:: course() {
    // Initialize course variables with a default
    code = "";
    title = "";
    creditHours = 0;
    preReq = "";
    CourseSpeciality = "";
}

//getting courses info from the faculty class 
void course::courses(string code, string title, int creditHours, string preReq = "",string CourseSpeciality) {
   this-> code = code;
   this->title = title;
   this->creditHours = creditHours;
   this->preReq = preReq;
   this->CourseSpeciality = CourseSpeciality;

}


