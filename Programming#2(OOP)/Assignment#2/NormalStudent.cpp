#include "NormalStudent.h"

NormalStudent::NormalStudent()
{
name="";
level=0;
courses=NULL;
totalNumberOfCourses=0;
usedFields=0;
}
NormalStudent::NormalStudent(std::string name, int level, int totalNumberOfCourses):Student(name,level,totalNumberOfCourses)
{
    courses=new Course[totalNumberOfCourses];
}

double NormalStudent::calcCreditHourse()
{
    double totalHourse=0;
    for(int i=0;i<usedFields;i++){
        totalHourse+=courses[i].getLabTime()+(2*courses[i].getLectureTime())+courses[i].getSectionTime();
    }
    return totalHourse;
}
NormalStudent::~NormalStudent()
{

}
