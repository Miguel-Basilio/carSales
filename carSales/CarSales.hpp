//
//  CarSales.hpp
//  carSales
//
//  Created by AB on 4/30/21.
//

#ifndef CarSales_hpp
#define CarSales_hpp
#include <string>
#include <stdio.h>
using namespace std;
#endif /* CarSales_hpp */
class CarSales{
    
private:
    int year;
    string make;
    int speed;
    
public:
    //constructor
    CarSales();
    CarSales(int pYear, string pMake, int pSpeed =0);
    
    //accessors
    int getYear();
   string  getMake();
    int getSpeed();
    
    //Mutators
    void setYear(int pYear);
    void setMake(string pMake);
    void setSpeed(int pSpeed);
    void acelerate(); 
    void brake();
};
