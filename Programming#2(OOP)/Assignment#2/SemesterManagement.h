#ifndef SEMESTERMANAGEMENT_H
#define SEMESTERMANAGEMENT_H
#include"Student.h"

class SemesterManagement
{
    public:
        SemesterManagement();
        SemesterManagement(int numberOfStudents);
        void addNewStudent(Student *s);
        void printStudentsReport();
        ~SemesterManagement();
    private:
        Student** students;
        int numberOfStudents;
        int usedFields;
};

#endif // SEMESTERMANAGEMENT_H
