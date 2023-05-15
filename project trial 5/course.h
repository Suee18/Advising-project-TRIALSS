#pragma once
class course
{

public:
    string code;
    string title;
    int creditHours;
    string preReq;
    string CourseSpeciality;

    course();
    void courses(string code, string title, int creditHours, string preReq = "",string CourseSpeciality="");
};



