#ifndef VEHICLE_H_INCLUDED
#define VEHICLE_H_INCLUDED

#include "BasicContainer.h"

 class Vehicle {
 private :
     static int counter ;
     int Number ;
     double CapacityHoldContainer ;
     BasicContainer ** containers ;
     int usedFields ;

 public :
    Vehicle ();
    Vehicle ( double );
    int getNumber () const ;
    void setCapacityHoldContainer (double  );
    double getCapacityHoldContainer () const  ;
    friend istream & operator>> ( istream &  , Vehicle &   );
    friend iostream & operator<< ( iostream &  ,const Vehicle &   );
    ~ Vehicle ();
    void view () ;
    bool cheekAvailability( BasicContainer * );
    void transportKind ( BasicContainer * );
    void upload (BasicContainer * );
    void offload (BasicContainer * );
    bool operator<(const Vehicle&v)const;



 };
#endif // VEHICLE_H_INCLUDED
