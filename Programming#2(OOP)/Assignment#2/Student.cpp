#include "Student.h"

Student::Student(){
name="";
level=0;
courses=NULL;
totalNumberOfCourses=0;
usedFields=0;
}
Student::Student(std::string name, int level, int totalNumberOfCourses){
this->name=name;
this->level=level;
this->totalNumberOfCourses=totalNumberOfCourses;
usedFields=0;
}
Student::Student(Student & s){
    name=s.getName();
    level=s.getlevel();
    totalNumberOfCourses=s.getTotalNumberOfCourses();
    usedFields=s.usedFields;
    courses=new Course[totalNumberOfCourses];
    for(int i=0;i<usedFields;i++)
        courses[i]=s.courses[i];
}
void Student::addNewCourse(Course& c){
    if(usedFields<totalNumberOfCourses){
        courses[usedFields]=c;
        usedFields++;
    }
    else{
    totalNumberOfCourses++;
    Course *temp=new Course[totalNumberOfCourses];
        for(int i=0;i<usedFields;i++)
            temp[i]=courses[i];
        temp[usedFields]=c;
        usedFields++;
        Course *forDeletion=courses;
        courses=temp;
        temp=NULL;
        delete[]forDeletion;}
}


void Student::setName(std::string name)
{
    this->name=name;

}

std::string Student::getName()
{
return name;
}

void Student::setLevel(int level)
{
this->level=level;

}

int Student::getlevel()
{
return level;
}

void Student::setCourses(Course* c)
{
courses=c;
}

Course* Student::getCourses()
{
return courses;
}

void Student::setTotalNumberOfCourses(int totalNumberOfCourses)
{
this->totalNumberOfCourses=totalNumberOfCourses;

}
double Student::calcCreditHourse()
{

}

int Student::getTotalNumberOfCourses()
{
    return totalNumberOfCourses;
}

Student::~Student()
{
    delete[] courses;
}
void Student::operator=(Student& other){
name=other.getName();
level=other.getlevel();
totalNumberOfCourses=other.getTotalNumberOfCourses();
usedFields=other.usedFields;
Course *temp=other.getCourses();
courses=new Course[totalNumberOfCourses];
for(int i;i<totalNumberOfCourses;i++)
    courses[i]=temp[i];
temp=NULL;
}
