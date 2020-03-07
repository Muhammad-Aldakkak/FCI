#ifndef HEAVYCONTAINER_H_INCLUDED
#define HEAVYCONTAINER_H_INCLUDED

#include "BasicContainer.h"

class HeavyContainer : public BasicContainer
{
public:
    HeavyContainer () ;
    HeavyContainer ( double , double , double );
    ~HeavyContainer () ;
};

#endif // HEAVYCONTAINER_H_INCLUDED
