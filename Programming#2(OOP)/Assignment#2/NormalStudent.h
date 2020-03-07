#ifndef NORMALSTUDENT_H
#define NORMALSTUDENT_H

#include "Student.h"


class NormalStudent : public Student
{
public:
    NormalStudent();
    NormalStudent(std::string name, int level, int totalNumberOfCourses);
    virtual double calcCreditHourse();

    ~NormalStudent();

};

#endif // NORMALSTUDENT_H
