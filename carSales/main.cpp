//
//  main.cpp
//  carSales
//
//  Created by AB on 4/30/21.
//

#include <iostream>
#include <string>
#include <fstream>
#include "CarSales.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    //this piece of code reads a file with differen cars and adds the speed and brakes aswell:
   
   string mk;
    int yr,sd;
    
    ifstream carInDoor ("CarInventory.txt"); //opens list of cars
    
    while (carInDoor.eof() != true)
    {
        cout<< "Year: "<< setw(6)<<"Make: "<<setw(13)<<"Speed:"<<endl;
        carInDoor >>yr>>mk>>sd;
        CarSales curCar(yr, mk, sd);
        cout << curCar.getYear()<< "  " << curCar.getMake() << " " << curCar.getSpeed()<< "  " << endl;
       
        //Acelerating Car:
        cout <<"Accelarating..."<< endl;
        for (int faster = 0; faster <= 5; faster++)
        {
          
            curCar.acelerate();
            cout << curCar.getYear()<< " " << setw(14)<< curCar.getMake() << " " << setw(4)<<curCar.getSpeed()<< " " << endl;
         
        }
     cout<<"==========================" << endl;
        //Stopping
        cout<< "Braking..."<<endl;
        
        for (int slower = 0; slower <= 5; slower++)
        {
        
            curCar.brake();
            cout << curCar.getYear()<< " " << setw(14)<< curCar.getMake() << " " <<setw(4)<< curCar.getSpeed()<< " " << endl;
        }
        cout<<"==========================" << endl;
    }
    
    return 0;
}

