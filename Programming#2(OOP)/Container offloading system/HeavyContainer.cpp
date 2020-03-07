

 #include "HeavyContainer.h"

// default constructor
 HeavyContainer:: HeavyContainer() : BasicContainer()
 {

 }

// parametrized constructor
 HeavyContainer::HeavyContainer( double explosive , double toxic , double cap ) : BasicContainer ( explosive , toxic , cap )
 {

 }

// destructor
HeavyContainer::~HeavyContainer()
{
    std::cout << "This is Heavy Container destructor" << endl ;
}
