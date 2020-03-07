#include <iostream>
#include <string>
#include <limits>
#include "Date.h"
#include "Account.h"
#include "Customer.h"
using namespace std;
int main(){
short x;
Customer *c=new Customer[x];
cout<<"How many customer do you want to add?\t";
cin>>x;
for(int i=0;i<x;i++){
    cout<<"\nCustomer Name :\t";
    string temp;
    cin.ignore( numeric_limits <streamsize> ::max(), '\n' );
    getline(cin,temp);
    char*tempName=new char[temp.length()];
    for(int j=0;j<temp.length();j++)
        tempName[j]=temp[j];
    c[i].setCustomerName(tempName,temp.length());
    c[i].account.setName(tempName,temp.length());
    cout<<"Gender:\t";
    char g;
    cin>>g;
    c[i].setGender(g);
    cout<<"National ID:\t";
    int id;
    cin>>id;
    c[i].setNationalID(id);
    cout<<"want today's date enter y/n:\t";
    cin>>g;
    if(g!='y'){
        cout<<"Enter date you want(dd/mm/yyyy):\t";
        cin>>temp;
        Date d(temp);
        c[i].account.setCreationDate(d);
    }
    cout<<"Balance:\t";
    double b;
    cin>>b;
    c[i].account.setBalance(b);
    c[i].account.setID(i+1);
}
start:
cout<<"\nChoose the following needed operation:\n"
<<"1-Deposit.\n2-Withdraw.\n3-view.\n4-Exite.\n";
int choose;
double v;
cin>>choose;
if(choose==1){
    cout<<"Enter the Account ID:\t";
    cin>>choose;
    cout<<"deposited amount:\t";
    cin>>v;
    v=c[choose-1].account.deposite(v);
    cout<<"Done\nyour balance became:\t"<<v<<endl;
    goto start;}
else if(choose==2){
    cout<<"Enter the Account ID:\t";
    cin>>choose;
    cout<<"withdrawn amount:\t";
    cin>>v;
    v=c[choose-1].account.withdraw(v);
    cout<<"Done\nyour balance became:\t"<<v<<endl;
    goto start;}
else if(choose==3){
    cout<<"Enter the Account ID you want to view:\t";
    cin>>choose;
    c[choose-1].view();
    goto start;
}
else if(choose==4){
    cout<<"thank you...\n";}
else{
    cout<<"invalid choic,try again...\n";
    goto start;
}
    return 0;
}
