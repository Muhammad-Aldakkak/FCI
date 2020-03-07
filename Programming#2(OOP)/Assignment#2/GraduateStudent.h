#ifndef GRADUATESTUDENT_H
#define GRADUATESTUDENT_H

#include "Student.h"


class GraduateStudent : public Student
{
    public:
        GraduateStudent();
        GraduateStudent(std::string name, int level, int totalNumberOfCourses);
        virtual double calcCreditHourse();
        ~GraduateStudent();

};

#endif // GRADUATESTUDENT_H
