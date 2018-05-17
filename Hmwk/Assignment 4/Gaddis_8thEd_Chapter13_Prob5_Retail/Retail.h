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

class Retail{
    private:
        int Num;
        float Price;
        string Name;
        float TotCost;
    public:
        Retail (string nme,int num,float price);
        string getName(){return Name;}
        int getNum(){return Num;}
        float getPrice(){return Price;}
        float getTotal(){return TotCost;}
        void setName( string nme ) { Name = nme; }
        void setNum( int num ) { Num = num; }
        void setPrice( float price ) { Price = price; }
        float setTotal( float price, int num ){
            TotCost=(price*num);
        };
};


#endif /* DATE_H */

