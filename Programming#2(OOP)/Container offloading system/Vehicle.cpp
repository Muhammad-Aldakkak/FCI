

#include "Vehicle.h"

// initialize static member
int Vehicle::counter = 1;

// default constructor
Vehicle ::Vehicle()
{
    Number = counter ++ ;
    CapacityHoldContainer = 0.0;
}

// parametrized constructor
Vehicle::Vehicle( double capacity )
{
    Number = counter ++ ;
    CapacityHoldContainer = capacity ;
}

//destructor
Vehicle::~Vehicle()
{
    delete[] containers ;
}

// setters
void Vehicle::setCapacityHoldContainer( double capacity )
{
    CapacityHoldContainer = capacity ;
    // tons > 100
}

// getters
double Vehicle::getCapacityHoldContainer() const
{
    return CapacityHoldContainer ;
}
int Vehicle::getNumber() const
 {
     return Number ;
 }

// operator overloading
istream & operator>> ( istream & in ,Vehicle & V )
{
    in >> V.Number >> V.CapacityHoldContainer  ;
    return in ;
}
iostream & operator<< ( iostream & out ,const Vehicle & V  )
{
    out  << V.Number <<  V.CapacityHoldContainer ;
    return out ;
}

// view function
void Vehicle::view()
{
    cout << Number <<"   vehicle information :" << endl
         << CapacityHoldContainer << "   Containers " << endl
         << "----------------------------------------------" << endl ;
}

//cheekAvailability function
bool Vehicle:: cheekAvailability( BasicContainer * x)
{
    if ( CapacityHoldContainer > x->get_capacity() )
        return true ;
}

// function transportKind
void Vehicle::transportKind( BasicContainer * x)
{
        // ????????????????
}

// function upload
void Vehicle::upload( BasicContainer * x)
{
    if (cheekAvailability ( x ))
    {
        containers [usedFields] = x ;
        CapacityHoldContainer -= x ->get_capacity() ;
        usedFields ++ ;
    }
}

// function offload
void Vehicle::offload ( BasicContainer * x )
{
    --usedFields;
    CapacityHoldContainer += x ->get_capacity() ;
    delete containers[usedFields] ;
}
bool Vehicle::operator<(const Vehicle& v)const
{
    return(CapacityHoldContainer<v.getCapacityHoldContainer());
}

