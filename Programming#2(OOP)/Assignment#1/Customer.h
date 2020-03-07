#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Account.h"
class Customer{
private:
    char* customerName;
    int sizeOfName;
    int nationalID;
    char gender;

public:
    Account account;
    Customer();
    Customer(char*name,int sizeOfName,int nationalID,char gender);
    void setCustomerName(char*name,int sizeOfName);
    void setNationalID(int nationalID);
    void setGender(char gender);
    void setAccount(const Account&account);
    char* getCustomerName();
    int getSizeOfName();
    int getNationalID();
    char getGender();
    Account getAccount();
    void view();
    ~Customer();
};
#endif // Customer
