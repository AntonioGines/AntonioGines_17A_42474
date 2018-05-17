/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on May 4, 2018, 10:31 AM
 * Purpose:  Determining the Year based on a Number
 */

#include <cstdlib>
#include <iostream>
using namespace std;

class TimeOff{
    private:
        int MaxSick;
        int MaxVac;
        int MaxUnpd;
        int SickTake;
        int VacTake;
        int UnpaidTk;
    public:
        void SetMaxSick(int);
        void SetMaxVac(int);
        void SetMaxUnpd(int);
        void SetSickTake(int);
        void SetVacTake(int);
        void SetUnpaidTk(int);
        int GetMaxSick() const;
        int GetMaxVac() const;
        int GetMaxUnpd() const;
        int GetSickTake() const;
        int GetVacTake() const;
        int GetUnpaidTk() const;
};
