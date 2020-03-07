#include "Course.h"

Course::Course()
{
   name=" ";
   lectureTime=0;
   labTime=0;
   sectionTime=0;
}
Course::Course(std::string name, double lectureTime, double labTime, double sectionTime)
{
this->name=name;
this->lectureTime=lectureTime;
this->labTime=labTime;
this->sectionTime=sectionTime;
}
void Course::setSectionTime(double sectionTime)
{
this->sectionTime=sectionTime;
}

double Course::getSectionTime()
{
return sectionTime;
}

void Course::setLabTime(double labTime)
{
this->labTime=labTime;
}

double Course::getLabTime()
{
return labTime;
}
void Course::setLectureTime(double lectureTime)
{
this->lectureTime=lectureTime;
}
double Course::getLectureTime()
{
return lectureTime;
}
void Course::setName()
{
this->name=name;
}
std::string Course::getName(std::string name)
{
return name;
}

Course::~Course(){}
