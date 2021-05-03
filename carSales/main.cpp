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
    
 
    cout << "Use the Car Class: \n\n";
    CarSales Chevrolet (2011, "Camaro",0);
    CarSales Mazda (2021, "Miata",0);
    CarSales Honda (2001, "Accord",0);
    CarSales Ford (2010, "Focus", 0);
    
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
           // Chevrolet.acelerate();
            //cout <<Chevrolet.getYear()<<" "<<Chevrolet.getMake()<< "Current Speed: " << Chevrolet.getSpeed() <<" mph."<< endl;
            curCar.acelerate();
            cout << curCar.getYear()<< " " << setw(14)<< curCar.getMake() << " " << setw(4)<<curCar.getSpeed()<< " " << endl;
         
        }
     cout<<"==========================" << endl;
        //Stopping
        cout<< "Braking..."<<endl;
        
        for (int slower = 0; slower <= 5; slower++)
        {
           // Chevrolet.brake();
          //  cout <<Chevrolet.getYear()<<" " <<Chevrolet.getMake()<< "Current Speed: " << Chevrolet.getSpeed() <<" mph."<< endl;
            curCar.brake();
            cout << curCar.getYear()<< " " << setw(14)<< curCar.getMake() << " " <<setw(4)<< curCar.getSpeed()<< " " << endl;
        }
        cout<<"==========================" << endl;
    }
    
    return 0;
}

