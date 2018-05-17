/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on May 4, 2018, 10:31 AM
 * Purpose:  Determining the Year based on a Number
 */

#include <iostream>
using namespace std;
#include "Date.cpp"

#ifndef DATE_H
#define DATE_H

void Date::SetDate(int n){
    Date=n;
}

int Date::GetDate() const{
    return Date;
}

void Date::Convert(int date){
    if(date>=1&&date<=31){
        cout<<"January "<<date<<endl;
    }
    if(date>=32&&date<=59){
        cout<<"Febuary "<<date-31<<endl;
    }
    if(date>=60&&date<=90){
        cout<<"March "<<date-59<<endl;
    }
    if(date>=91&&date<=120){
        cout<<"April "<<date-90<<endl;
    }
    if(date>=121&&date<=151){
        cout<<"May "<<date-120<<endl;
    }
    if(date>=152&&date<=181){
        cout<<"June "<<date-151<<endl;
    }
    if(date>=182&&date<=212){
        cout<<"July "<<date-181<<endl;
    }
    if(date>=213&&date<=243){
        cout<<"August "<<date-212<<endl;
    }
    if(date>=244&&date<=273){
        cout<<"September "<<date-243<<endl;
    }
    if(date>=274&&date<=304){
        cout<<"October "<<date-273<<endl;
    }
    if(date>=305&&date<=334){
        cout<<"November "<<date-304<<endl;
    }
    if(date>=335&&date<=365){
        cout<<"December "<<date-334<<endl;
    }
}


#endif /* DATE_H */

