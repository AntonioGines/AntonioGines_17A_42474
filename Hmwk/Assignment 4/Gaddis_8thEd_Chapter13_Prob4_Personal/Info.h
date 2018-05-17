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

class Info{
    private:
        int Age;
        int Num;
        string Address;
        string Name;
    public:
        Info(string nme, string add, int ag, int num);
        string getName(){return Name;}
        int getNum(){return Num;}
        string getAddress(){return Address;}
        int getAge(){return Age;}
        void setName( string nme ) { Name = nme; }
        void setNum( int num ) { Num = num; }
        void setAddress( string add ) { Address = add; }
        void setAge( int ag ) { Age = ag; }
};


#endif /* DATE_H */

