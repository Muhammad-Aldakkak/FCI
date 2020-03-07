#ifndef SHIP_H
#define SHIP_H


#include "BasicContainer.h"
#include "HeavyContainer.h"
#include "RefrigeratedContainer.h"

class Ship
{
private:
    std::string name;
    int static counter;
    int number;
    double maximumCapacity;
    double capacityHoldToxic;
    double capacityHoldExplosive;
    int capacityHoldRefrigerated;
    int capacityHoldHeavy;
    int maxNumberOfAllContainers;
    BasicContainer **containers;
    int usedFields ;
public:
    Ship();
    Ship(std::string ,double ,double ,double ,int ,int ,int );
    void setName(std::string );
    void setMaximumCapacity(double );
    void setCapacityHoldToxic(double );
    void setCapacityHoldExplosive(double );
    void setCapacityHoldRefrigerated(int );
    void setCapacityHoldHeavy(int );
    void setMaxNumberOfAllContainers(int );
    std::string getName();
    int getNumber();
    double getMaximumCapacity()const;
    double getCapacityHoldToxic();
    double getCapacityHoldExplosive();
    int getCapacityHoldRefrigerated();
    int getCapacityHoldHeavy();
    int getMaxNumberOfAllContainers();
    void upload(BasicContainer *);
    bool checkAvalibility(BasicContainer *);
    bool operator<(const Ship&s)const;
    friend istream & operator>> ( istream &  , Ship &   );
    friend iostream & operator<< ( iostream &  ,const Ship &   );
    ~Ship();

protected:

};

#endif // SHIP_H
