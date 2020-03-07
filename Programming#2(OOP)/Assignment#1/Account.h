#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "Date.h"

class Account{
private:
    char* name;
    int nameSize;
    int id;
    double balance;
    Date creationDate;
public:
    Account();
    Account(Account &a);
    Account(char*n,int nameSize,int id,double balance,Date& creationDate);
    void setName(char*n,int nameSize);
    void setID(int id);
    void setBalance(double balance);
    void setCreationDate(const Date&creationDate);
    char* getName();
    int getNameSize();
    int getID();
    double getBalance();
    Date getCreationDate();
    void view();
    double deposite(double value);
    double withdraw(double value);
    ~Account();
};
#endif
