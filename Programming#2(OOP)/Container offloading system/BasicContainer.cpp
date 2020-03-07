
#include "BasicContainer.h"

//initialize static counter
int BasicContainer::counter = 1;

// default constructor
BasicContainer::BasicContainer()
{
    serialNumber = counter ++  ;
    explosiveContained = 0.0 ;
    toxicContained = 0.0 ;
    capacity = 0.0 ;
}

// parametrized constructor
BasicContainer::BasicContainer( double explosive , double toxic , double cap )
{
    serialNumber = counter++ ;
    explosiveContained = explosive ;
    toxicContained = toxic ;
    capacity = cap ;
}

//destructor
BasicContainer::~BasicContainer()
{
    cout << "This is Basic Container destructor" << endl ;
}

//setters
void BasicContainer::set_explosiveContained( double explosive )
{
    explosiveContained = explosive ;
}
void BasicContainer::set_toxicContained( double toxic)
{
    toxicContained = toxic ;
}
void BasicContainer::set_capacity( double cap )
{
    // no more than 100 tons ???
    capacity = cap ;
}

//getters
int BasicContainer::get_serialNumber()
{
    return serialNumber ;
}
double BasicContainer::get_explosiveContained()
{
    return explosiveContained ;
}
double BasicContainer::get_toxicContained()
{
    return toxicContained ;
}
double BasicContainer::get_capacity()
{
    return capacity ;
}

// operator overloading
istream & operator>> ( istream & in , BasicContainer & C  )
{
    in>> C.serialNumber >> C.toxicContained >> C.toxicContained >> C.capacity  ;
    return in ;
}
iostream & operator<< ( iostream & out ,const BasicContainer & C  )
{
    out  << C.serialNumber << C.explosiveContained << C.toxicContained << C.capacity ;
    return out ;
}

// view function
void BasicContainer::view()
{
    cout << serialNumber <<"   container information :" << endl
         << explosiveContained << "   tons of explosives " << endl
         << toxicContained << "   tons of toxics" << endl
         << capacity << "   tons total capacity" << endl
         << "----------------------------------------------" << endl ;
}
