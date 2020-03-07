#include <iostream>
#include"Student.h"
#include"NormalStudent.h"
#include"GraduateStudent.h"
#include"SemesterManagement.h"
using namespace std;

int main()
{
    Course csCourse("CS",1.5,1.5,1.5);
    Course englishCourse("english",1.5,1.5,3);
    Course managementCourse("managment",1.5,1.5,1.5);
    Course programmingCourse("Programming",1.5,1.5,1.5);
    NormalStudent s1("Mohamed" , 1 , 6);
    s1.addNewCourse(csCourse);
    s1.addNewCourse(englishCourse);
    s1.addNewCourse(managementCourse);

    NormalStudent s2;
    s2 = s1;
    s2.setName("Ahmed");
    s2.setLevel(2);
    s2.addNewCourse(programmingCourse);

    GraduateStudent s3("Ibrahim" , 1 , 6);
    s3.addNewCourse(csCourse);
    s3.addNewCourse(englishCourse);
    s3.addNewCourse(managementCourse);
    SemesterManagement sm(2);
    sm.addNewStudent(&s1);
    sm.addNewStudent(&s2);
    sm.addNewStudent(&s3);
    sm.printStudentsReport();




    return 0;
}
