#include "Account.h"
#include <iostream>
#include <ctype.h>

Account::Account(){
name=new char[50];
id=0;
balance=0;
}
Account::Account(Account &a){
name=a.getName();
nameSize=a.getNameSize();
id=a.getID();
balance=a.getBalance();
creationDate=a.getCreationDate();
}
Account::Account(char*n,int nameSize,int id,double balance,Date& creationDate){
name=new char[nameSize];
    for(int i=0;i<nameSize;i++)
        name[i]=n[i];
this->nameSize=nameSize;
this->id=id;
this->balance=balance;
this->creationDate=creationDate;
}
void Account::setName(char*n,int nameSize){
name=new char[nameSize];
    for(int i=0;i<nameSize;i++)
        name[i]=n[i];
this->nameSize=nameSize;
}
void Account::setID(int id){
this->id=id;
}
void Account::setBalance(double balance){
this->balance=balance;
}
void Account::setCreationDate(const Date&creationDate){
this->creationDate=creationDate;
}
char* Account::getName(){
return name;
}
int Account::getNameSize(){
return nameSize;
}
int Account::getID(){
return id;
}
double Account::getBalance(){
return balance;
}
Date Account::getCreationDate(){
return creationDate;
}
void Account::view(){
std::cout<<"\nAccount name:\t";
for(int i=0;i<nameSize;i++){
    char temp=toupper(name[i]);
    std::cout<<temp;
}
std::cout<<"\nAccount ID:\t"<<id
<<"\nCurrent balance:\t"<<balance
<<"\nDate:\t"
<<creationDate.getDay()<<"/"
<<creationDate.getMonth()<<"/"
<<creationDate.getYear()<<"\n";
}
double Account::deposite(double value){
balance+=value;
return balance;
}
double Account::withdraw(double value){
if(balance>=value){
    balance-=value;
    return balance;}
std::cout<<"Cannot Withdraw From the account,No available balance\n";
    return balance;
}
Account::~Account(){
delete []name;
}
