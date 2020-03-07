
#include "Train.h"

// default constructor
Train::Train() : Vehicle()
{

}

// parametrized constructor
Train::Train( double capacity ) : Vehicle( capacity )
{

}

// destructor
Train::~Train()
{
    cout << "This is Train constructor " << endl ;
}

