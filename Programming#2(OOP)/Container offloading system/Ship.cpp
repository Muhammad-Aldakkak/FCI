
#include "Ship.h"

// initialize static member
int Ship::counter=1;

// default constructor
Ship::Ship()
{
    number=counter++;
    name=" ";
    maximumCapacity=0;
    capacityHoldToxic=0;
    capacityHoldExplosive=0;
    capacityHoldRefrigerated=0;
    capacityHoldHeavy=0;
    maxNumberOfAllContainers=0;
    containers=NULL;
}

// parametrized constructor
Ship::Ship(std::string name, double maximumCapacity, double capacityHoldToxic, double capacityHoldExplosive, int capacityHoldRefrigerated, int capacityHoldHeavy, int maxNumberOfAllContainers)
{
    number=counter++;
    this->name=name;
    this->maximumCapacity=maximumCapacity;
    this->capacityHoldToxic=capacityHoldToxic;
    this->capacityHoldExplosive=capacityHoldExplosive;
    this->capacityHoldRefrigerated=capacityHoldRefrigerated;
    this->capacityHoldHeavy=capacityHoldHeavy;
    this->maxNumberOfAllContainers=maxNumberOfAllContainers;
    containers=new BasicContainer*[maxNumberOfAllContainers];
}

// setters
void Ship::setName(std::string name)
{
    this->name=name;

}

void Ship::setMaximumCapacity(double maximumCapacity)
{
    this->maximumCapacity=maximumCapacity;

}

void Ship::setCapacityHoldToxic(double capacityHoldToxic)
{
    this->capacityHoldToxic=capacityHoldToxic;

}

void Ship::setCapacityHoldExplosive(double capacityHoldExplosive)
{
    this->capacityHoldExplosive=capacityHoldExplosive;

}

void Ship::setCapacityHoldRefrigerated(int capacityHoldRefrigerated)
{
    this->capacityHoldRefrigerated=capacityHoldRefrigerated;

}

void Ship::setCapacityHoldHeavy(int capacityHoldHeavy)
{
    this->capacityHoldHeavy=capacityHoldHeavy;

}

void Ship::setMaxNumberOfAllContainers(int maxNumberOfAllContainers)
{
    this->maxNumberOfAllContainers=maxNumberOfAllContainers;

}

// getters
std::string Ship::getName()
{
    return name;
}

int Ship::getNumber()
{
    return number;
}

double Ship::getMaximumCapacity()const
{
    return maximumCapacity;
}

double Ship::getCapacityHoldToxic()
{
    return capacityHoldToxic;
}

double Ship::getCapacityHoldExplosive()
{
    return capacityHoldExplosive;
}

int Ship::getCapacityHoldRefrigerated()
{
    return capacityHoldRefrigerated;
}

int Ship::getCapacityHoldHeavy()
{
    return capacityHoldHeavy;
}

int Ship::getMaxNumberOfAllContainers()
{
    return maxNumberOfAllContainers;
}

//function upload
void Ship::upload(BasicContainer* container)
{
    if ( checkAvalibility( container ) )
    {
        containers[usedFields] = container ;
        usedFields++ ;
        maxNumberOfAllContainers-- ;
        capacityHoldExplosive-=container->get_explosiveContained() ;
        capacityHoldToxic-=container->get_toxicContained();
        maximumCapacity-=container->get_capacity();
        if( dynamic_cast < HeavyContainer * > ( container ) )
            capacityHoldHeavy--;
        else if( dynamic_cast < RefrigeratedContainer * > ( container ) )
            capacityHoldRefrigerated--;
    }
}

// function check
bool Ship::checkAvalibility(BasicContainer* container)
{
    if ( dynamic_cast < BasicContainer *> ( container ) )
        if ( maxNumberOfAllContainers <= 0 )
            return false ;
    else if ( dynamic_cast < HeavyContainer * > ( container ))
        if ( capacityHoldHeavy <= 0 )
            return false ;
    else
        if ( capacityHoldRefrigerated <= 0 )
            return false;

    if ( container->get_capacity() > maximumCapacity )
        return false;
    if ( container->get_explosiveContained() > capacityHoldExplosive)
        return false;
    if ( container->get_toxicContained() > capacityHoldToxic)
        return false;

    return true;

}

//destructor
Ship::~Ship()
{
    delete []containers;
}
bool Ship::operator<(const Ship& s)const
{
    return(maximumCapacity<s.getMaximumCapacity());
}
// operator overloading
istream & operator>> ( istream & in , Ship & S  )
{
    in >> S.name >> S.maximumCapacity >> S.capacityHoldExplosive >> S.capacityHoldToxic >> S.capacityHoldHeavy >> S.capacityHoldRefrigerated >> S.maxNumberOfAllContainers  ;
    return in ;
}
iostream & operator<< ( iostream & out ,const Ship & S  )
{
    out  <<  S.name << S.number << S.maximumCapacity << S.capacityHoldExplosive << S.capacityHoldToxic << S.capacityHoldHeavy << S.capacityHoldRefrigerated << S.maxNumberOfAllContainers  ;
    return out ;
}

