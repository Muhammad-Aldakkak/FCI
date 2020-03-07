#ifndef BASICCONTAINER_H_INCLUDED
#define BASICCONTAINER_H_INCLUDED

#include <iostream>
using namespace std;

class BasicContainer
{
private:
    int serialNumber ;
    double explosiveContained ;
    double toxicContained ;
    double capacity ;
    static int counter ;

public:
    BasicContainer() ;
    BasicContainer( double , double , double ) ;
    virtual ~BasicContainer() ;
    void set_explosiveContained ( double ) ;
    void set_toxicContained ( double ) ;
    void set_capacity ( double ) ;
    int get_serialNumber () ;
    double get_explosiveContained () ;
    double get_toxicContained () ;
    double get_capacity () ;
    void view () ;
    friend istream & operator>> ( istream & in , BasicContainer & C  );
    friend iostream & operator<< ( iostream & out ,const BasicContainer & C  );

};

#endif // BASICCONTAINER_H_INCLUDED

