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

void TimeOff::SetMaxSick(int n){
    MaxSick=n;
}
void TimeOff::SetMaxVac(int n){
    MaxVac=n;
}
void TimeOff::SetMaxUnpd(int n){
    MaxUnpd=n;
}
void TimeOff::SetSickTake(int n){
    SickTake=n;
}
void TimeOff::SetVacTake(int n){
    VacTake=n;
}
void TimeOff::SetUnpaidTk(int n){
    UnpaidTk=n;
}

int TimeOff::GetMaxSick() const{
    return MaxSick;
}
int TimeOff::GetMaxVac() const{
    return MaxVac;
}
int TimeOff::GetMaxUnpd() const{
    return MaxUnpd;
}
int TimeOff::GetSickTake() const{
    return SickTake;
}
int TimeOff::GetVacTake() const{
    return VacTake;
}
int TimeOff::GetUnpaidTk() const{
    return MaxUnpd;
}

#endif /* DATE_H */

