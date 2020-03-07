#include "Truck.h"

// default constructor
Truck:: Truck() : Vehicle()
{

}

// parametrized constructor
Truck:: Truck( double capacity ) : Vehicle( capacity )
{

}

// destructor
Truck::~Truck()
{
    cout << "This is Truck destructor " <<  endl ;
}
