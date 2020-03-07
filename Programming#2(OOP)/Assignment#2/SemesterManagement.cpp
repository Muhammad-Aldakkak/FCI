#include "SemesterManagement.h"
#include<iostream>

SemesterManagement::SemesterManagement()
{
numberOfStudents=0;
usedFields=0;
students=NULL;
}
SemesterManagement::SemesterManagement(int numberOfStudents)
{
this->numberOfStudents=numberOfStudents;
students=new Student*[numberOfStudents];
usedFields=0;
}
void SemesterManagement::addNewStudent(Student* s){
if(usedFields<numberOfStudents){
    students[usedFields]=s;
    usedFields++;
}
else{
    usedFields++;
    Student**temp=new Student*[usedFields];
    for(int i=0;i<numberOfStudents;i++){
        temp[i]=students[i];
    }
    temp[numberOfStudents]=s;
    Student **forDeletion=students;
    students=temp;
    temp=NULL;
    delete [] forDeletion;
}
}
void SemesterManagement::printStudentsReport()
{
    for(int i=0;i<usedFields;i++)
        std::cout<<"\nStudent name: "<<students[i]->getName()<<"\nCurrent hours are: "<<students[i]->calcCreditHourse();
}

SemesterManagement::~SemesterManagement()
{
    delete[]students;
}
