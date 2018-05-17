/* 
 * file:   EmpInfo.h
 * Author: Antonio GInes
 * Created on April 3, 2018, 12:45 PM
 * Purpose:  Getting the Date from a Class
 */

#include <string>
#include <iostream>
using namespace std;

#ifndef DATE_H
#define DATE_H

class Car{
    private:
        int Speed;
        int Model;
        string Make;
    public:
        Car(int v, int mod, string mke);
        int getSpeed(){return Speed;}
        int getModel(){return Model;}
        string getMake(){return Make;}
        void setSpeed( int v ) { Speed = v; }
        void setModel( int mod ) { Model = mod; }
        void setMake( string mke ) { Make = mke; }
        int Accelerate(int& v);
        int Brake(int& v);
};


#endif /* DATE_H */

