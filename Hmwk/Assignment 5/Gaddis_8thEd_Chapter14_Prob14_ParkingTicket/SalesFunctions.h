/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on May 4, 2018, 10:31 AM
 * Purpose:  Determining the Year based on a Number
 */

#include <iostream>
using namespace std;
#include "DivisionSales.cpp"

#ifndef SALESFUNCTIONS_H
#define SALESFUNCTIONS_H

void DivSales::SetTotal(){
    for(int h=0;h<=3;h++){
        Total+=Sales[h];
    }
}

int DivSales::GetTotal() const{
    return Total;
}


#endif /* SALESFUNCTIONS_H */

