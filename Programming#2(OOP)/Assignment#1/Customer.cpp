#include "Customer.h"
#include <iostream>
Customer::Customer()
{
    customerName=new char[50];
    sizeOfName=50;
    nationalID=0;
    gender='m';
}
Customer::Customer(char* name,int sizeOfName,int nationalID,char gender)
{
    customerName=new char[sizeOfName];
    for(int i=0;i<sizeOfName;i++)
        customerName[i]=name[i];
    this->sizeOfName=sizeOfName;
    this->nationalID=nationalID;
    this->gender=gender;
}
void Customer::setCustomerName(char*name,int sizeOfName)
{
    customerName=new char[sizeOfName];
    for(int i=0;i<sizeOfName;i++)
        customerName[i]=name[i];
    this->sizeOfName=sizeOfName;
    //account.setName(name,sizeOfName);
}
void Customer::setNationalID(int nationalID)
{
    this->nationalID=nationalID;
}
void Customer::setGender(char gender)
{
    this->gender=gender;
}
void Customer::setAccount(const Account&account)
{
    this->account=account;
}
char* Customer::getCustomerName()
{
    return customerName;
}
int Customer::getSizeOfName(){
return sizeOfName;
}
int Customer::getNationalID()
{
    return nationalID;
}
char Customer::getGender()
{
    return gender;
}
Account Customer::getAccount()
{
    return account;
}
void Customer::view(){
std::cout<<"Customer Name:\t";
for(int i=0;i<sizeOfName;i++){
    std::cout<<customerName[i];
}
std::cout<<"\nNational ID:\t"<<nationalID<<"\nGender:\t";
if(gender=='m') std::cout<<"male.";
else std::cout<<"female.";
account.view();
}
Customer::~Customer(){
delete []customerName;
}
