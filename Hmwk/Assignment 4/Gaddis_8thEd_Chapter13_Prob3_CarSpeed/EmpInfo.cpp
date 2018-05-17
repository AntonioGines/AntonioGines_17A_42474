/* 
 * file:   Date.cpp
 * Author: Antonio GInes
 * Created on April 3, 2018, 12:45 PM
 * Purpose:  Getting the Date from a Class
 */
#include <string>
#include <iostream>
using namespace std;

#include "Car.h"

Car::Car(int v, int mod, string mke){
    Speed=v;
    Model=mod;
    Make=mke;
}
Car::Accelerate(int& s){
    for(int i=0;i<=4;i++){
        s+=5;
        cout<<s<<" mph"<<endl;
    }
}
Car::Brake(int& b){
    for(int i=0;i<=4;i++){
        b-=5;
        cout<<b<<" mph"<<endl;
    }
}