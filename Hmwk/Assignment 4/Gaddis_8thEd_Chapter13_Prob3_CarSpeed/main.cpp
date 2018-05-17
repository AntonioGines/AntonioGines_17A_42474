/* 
 * file:   main.cpp
 * Author: Antonio GInes
 * Created on April 3, 2018, 10:42 AM
 * Purpose:  Acceleration and De-Acceleration of a car
 */

//System Libraries Here
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here
#include "Car.h"

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

string Month(int);

int main(int argc, char** argv) {
    //Declare Variables
    int speed,model;
    string make;
    
    //Input
    cout<<"Please enter the Model year, make, and current speed of the car"
        <<endl;
    cout<<"Model Year:"<<endl;
    cin>>model;
    cout<<"Make:"<<endl;
    cin>>make;
    cout<<"Speed:"<<endl;
    cin>>speed;
    Car info(speed,model,make);
    
    info.Accelerate(speed);
    info.Brake(speed);
    return 0;
}