#include "GraduateStudent.h"

GraduateStudent::GraduateStudent()
{
name="";
level=0;
courses=NULL;
totalNumberOfCourses=0;
usedFields=0;
}
GraduateStudent::GraduateStudent(std::string name, int level, int totalNumberOfCourses):Student(name,level,totalNumberOfCourses)
{
    courses=new Course[totalNumberOfCourses];
}

GraduateStudent::~GraduateStudent(){

}
double GraduateStudent::calcCreditHourse()
{
 double totalHourse=0;
    for(int i=0;i<usedFields;i++)
        totalHourse+=(2*courses[i].getLabTime())+(2*courses[i].getLectureTime());

    return totalHourse;
}
