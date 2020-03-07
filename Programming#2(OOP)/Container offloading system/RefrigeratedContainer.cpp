

#include "RefrigeratedContainer.h"

// default constructor
RefrigeratedContainer:: RefrigeratedContainer () : BasicContainer ()
{

}

// parametrized constructor
RefrigeratedContainer:: RefrigeratedContainer ( double explosive , double toxic , double cap ) : BasicContainer ( explosive , toxic , cap )
{

}

// destructor
RefrigeratedContainer::~RefrigeratedContainer()
{
    cout << "This is Refrigerated Container destructor " << endl ;
}
