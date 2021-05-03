//
//  CarSales.cpp
//  carSales
//
//  Created by AB on 4/30/21.
//

#include "CarSales.hpp"
CarSales::CarSales(){
    year = 2010; make = "Camaro"; speed = 0;
}
CarSales::CarSales(int pYear, string pMake, int pSpeed){
    year = pYear;
    make = pMake;
    speed = pSpeed;
}

//accessors
int CarSales::getYear(){
    return year;
}
string CarSales::getMake(){
    return make;
}
int CarSales::getSpeed(){
    return speed;
}

//Mutators
void CarSales::setYear(int pYear){
    year = pYear;
}
void CarSales::setMake(string pMake){
    make = pMake;
}
void CarSales::setSpeed(int pSpeed){
    speed = pSpeed;
}
void CarSales::acelerate(){
    speed += 5;
}
void CarSales::brake(){
    if ( speed >= 5)
        speed -=5;
    else
        speed = 0;
}
