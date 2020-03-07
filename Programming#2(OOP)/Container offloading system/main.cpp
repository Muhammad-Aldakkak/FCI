#include<string>
#include<vector>
#include<algorithm>
#include <iostream>
#include "BasicContainer.h"
#include "HeavyContainer.h"
#include "RefrigeratedContainer.h"
#include "Vehicle.h"
#include "Truck.h"
#include "Train.h"
#include "Ship.h"
using namespace std;

int main()
{
    int heavy,refrigerated;
     double mxCap,toxic, explosive,explosiveCont, CapacityTon,toxicCont,Tons;
    vector<Ship> ships;
    vector<Vehicle> vehicles;
    vector<BasicContainer> containers;
    start:
    cout<<"Choose the needed operation:\n1)add/remove a ship.\n2)add/remove a train or truck.\n3)add/remove a container.\n4)offload a container.\n";
    int choose;
    cin>>choose;
    if(choose==1){
        cout<<"1)Add  2)Remove\n";
        cin>>choose;
        if(choose==1){                  //add ship
                Ship s;
    cout << "Enter Maximunm Number of toxic parts the ship can hold "<< endl ;
    cin>> toxic ;
    s.setCapacityHoldToxic(toxic) ;
    cout << "Enter Maximunm Number of explosive parts the ship can hold "<< endl ;
    cin>> explosive ;
    s.setCapacityHoldExplosive(explosive) ;
    cout<< "Enter Max Number of heavy containers the ship can hold "<<endl ;
    cin>> heavy ;
    s.setCapacityHoldHeavy (heavy) ;
    cout<< "Enter Max Number of refrigerated containers the ship can hold "<<endl ;
    cin>> refrigerated ;
    s.setCapacityHoldRefrigerated(refrigerated) ;
    cout<< "Enter Max Number of containers the ship can hold "<<endl ;
    cin>> mxCap ;
    s.setMaximumCapacity(mxCap) ;
    cout<< "Enter Total capacity in Tons "<<endl ;
    cin>> Tons  ;
    s.setMaximumCapacity (Tons);
    ships.push_back(s);
    sort(ships.begin(),ships.end());
    goto start;
        }
        else if(choose==2){                              //Remove Ship
                cout<<"Enter Ship's number to be removed:\t";
            cin>>choose;
            for(unsigned i=0;i<ships.size();i++){
                Ship *s=&ships[i];
                if(choose==s->getNumber()){
                    ships.erase(ships.begin()+i);
                    cout<<"Done..\n";
                }
            }
            goto start;
        }
        else{cout<<"inavalid choice...\n";
        goto start;}

    }
    else if(choose==2){                 //add vehicle
        cout<<"1)Add  2)Remove\n";
        cin>>choose;
        if(choose==1){
            cout<<"1)Truck  2)Train\n";
            cin>>choose;
            cout<< "Enter Capacity in Tons";
            cin >>Tons ;
            if(choose==1){
                    Truck t(Tons);
                    vehicles.push_back(t);
            }
            else if(choose==2){
                    Train t(Tons);
                    vehicles.push_back(t);
            }
            sort(vehicles.begin(),vehicles.end());
            goto start;

        }
        else if(choose==2){             //Remove vehicle
            cout<<"Enter vehicle's number to be removed:\t";
            cin>>choose;
            for(unsigned i=0;i<vehicles.size();i++){
                Vehicle *v=&vehicles[i];
                if(choose==v->getNumber()){
                    vehicles.erase(vehicles.begin()+i);
                    cout<<"Done..\n";
                }

            }
            goto start;
        }
        else{cout<<"inavalid choice...\n";
        goto start;}
    }
    else if(choose==3){
        cout<<"1)Add  2)Remove\n";
        cin>>choose;
        if(choose==1){                          //Add container
            cout<<"1)Normal  2)Heavy  3)Refrigerated\n";
            cin>>choose;
            cout<<" Enter Number of Toxic parts ";
            cin>> toxicCont;
            cout<<" Enter Number of Explosive parts ";
            cin>> explosiveCont;
            cout<<" Enter Capacity in Tons ";
            cin>> CapacityTon;
            if(choose==1){
                BasicContainer c(explosiveCont,toxicCont,CapacityTon);
                containers.push_back(c);
            }
            else if(choose==2){
                HeavyContainer c(explosiveCont,toxicCont,CapacityTon);
                containers.push_back(c);
            }
            else{
                RefrigeratedContainer c(explosiveCont,toxicCont,CapacityTon);
                containers.push_back(c);
            }
            goto start;
        }
        else if(choose==2){                     //Remove Container
            cout<<"Enter Container's number to be removed:\t";
            cin>>choose;
            for(unsigned i=0;i<containers.size();i++){
                BasicContainer* c=&containers[i];
                if(choose==c->get_serialNumber()){
                    containers.erase(containers.begin()+i);
                    cout<<"Done..\n";
                }

            }
            goto start;
        }
        else{cout<<"inavalid choice...\n";
        goto start;}
    }
    else if(choose==4){/*
        cout << "choose a container to be offloaded " << endl;
        int n; //container number
        cin >> n ;
        int i = 0 ;
        while ( (n != containers[i]. get_serialNumber ()) && (i < containers.size()) )
            i++;

        if ( i >= containers.size()){
            cout << "this container is not exist" << endl;
            goto start;
        }

        else
        {   int j = 0 , t = 0;
            bool foundVehicle = false  , foundShip = false ;
            // refrigerated containers upload to a vehicle
            if( dynamic_cast < RefrigeratedContainer* > (containers[i]&))
            {
                while ( j < vehicles.size() && foundVehicle == false )
                {
                    if (dynamic_cast <Train *> (vehicles[j]&) && ( containers[i].get_capacity < vehicles[j].getCapacityHoldContainer )) {
                        vehicles[j].upload (containers[i]);
                        foundVehicle = true ;
                    }
                    j++;
                }
                if (foundVehicle == false )
                {
                    j=0;
                    while ( j < vehicles.size() && foundVehicle == false )
                    {
                        if (dynamic_cast <Truck *> (vehicles[j]&) && ( containers[i].get_capacity < vehicles[j].getCapacityHoldContainer )) {
                            vehicles[j].upload (containers[i]);
                            foundVehicle = true ;
                        }
                        j++;
                     }
                }
                if ( foundVehicle == false )
                    cout << "their is no appropriate vehicle from your list to transport this container " << endl;
                else
                    vehicles[j-1].view();
            }
            // not refrigerated  upload to a vehicle
            else
            {
                j=0;
                foundVehicle = false;
                while ( j < vehicles.size() && foundVehicle == false )
                    {
                        if ( containers[i].get_capacity < vehicles[j].getCapacityHoldContainer ) {
                            vehicles[j].upload (containers[i]);
                            foundVehicle = true ;
                        }
                        j++;
                     }
                if ( foundVehicle == false )
                    cout << "their is no appropriate vehicle from your list to transport this container" << endl;
                else
                    vehicles[j-1].view();

            }
            // upload containers to ship
            while ( t < ships.size() && foundShip == false )
                    {
                        if ( ships[t].checkAvalibility(containers [i]*) ) {
                            ships[t].upload (containers[i]);
                            if ( foundVehicle == true )
                                vehicles [j-1].offload(containers[i]*);
                            foundShip = true ;
                        }
                        t++;
                     }
            if ( founShip == false )
                cout << "their is no appropriate ship from your list to transport this container "<< endl;
            else
                    ships[t-1].view();
        }
*/
    }
    else{cout<<"inavalid choice...\n";
    goto start;
    }




   return 0;
}
