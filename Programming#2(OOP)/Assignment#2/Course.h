#ifndef COURSE_H
#define COURSE_H
#include<string>

class Course
{
private:
    std::string name;
    double lectureTime;
    double labTime;
    double sectionTime;
public:
    Course();
    Course(std::string name,double lectureTime,double labTime,double sectionTime);

    std::string getName(std::string name);
    void setName();

    double getLectureTime();
    void setLectureTime(double lectureTime);

    double getLabTime();
    void setLabTime(double labTime);

    double getSectionTime();
    void setSectionTime(double sectionTime);


    ~Course();

};

#endif // COURSE_H
