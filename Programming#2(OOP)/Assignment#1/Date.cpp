#include "Date.h"
#include<sstream>
#include<ctime>
Date::Date(){
time_t currentTime = time(0);   // get time now
struct tm * now = localtime( &currentTime );
day=now->tm_mday;
month=now->tm_mon+1;
year=now->tm_year+1900;
}
Date::Date(std::string date){
for(int i=1;i<3;i++){
    std::string temp=date.substr(0,date.find("/"));
    date=date.replace(0,date.length(),date.substr(date.find("/")+1));
    std::stringstream ss(temp);
    if(i==1){
        ss>>day;
    }
    else{
        ss>>month;
        ss.str(std::string());
        ss.clear();
        ss<<date;
        ss>>year;
    }
}
}
Date::Date(int day,int month,int year){
this->day=day;
this->month=month;
this->year=year;
}
void Date::setDay(int day){
this->day=day;
}
void Date::setMonth(int month){
this->month=month;
}
void Date::setYear(int year){
this->year=year;
}
int Date::getDay(){
return day;
}
int Date::getMonth(){
return month;
}
int Date::getYear(){
return year;
}
