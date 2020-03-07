#ifndef STUDENT_H
#define STUDENT_H
#include "Course.h"
class Student{
protected:
    std::string name;
    int level;
    int totalNumberOfCourses;
public:
    Course *courses;
    int usedFields; //new added
    Student();
    Student(std::string name,int level,int totalNumberOfCourses);
    Student(Student &s);
    void addNewCourse(Course &c);
    virtual double calcCreditHourse()=0;
    void setName(std::string name);
    std::string getName();
    void setLevel(int level);
    int getlevel();
    void setCourses(Course *c);
    Course * getCourses();
    void setTotalNumberOfCourses(int totalNumberOfCourses);
    int getTotalNumberOfCourses();
    ~Student();
    void operator=(Student& other);

};

#endif // STUDENT_H
