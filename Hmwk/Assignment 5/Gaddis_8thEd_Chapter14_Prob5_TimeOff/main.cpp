/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on May 4, 2018, 10:31 AM
 * Purpose:  Determining the Year based on a Number
 */
#include <cstdlib>
using namespace std;

//User Libraries
#include "Number.h"
//#include "Date.cpp"
//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

int main(int argc, char** argv) {
    TimeOff check;
    int maxvac,maxpaid,maxsick,empvac,emppaid,empsick;
    
    cout<<"This program is designed to take in the maximum amount of Paid "
        <<"Vacation, Unpaid Vacation and Sick Leave as well as an "<<endl;
    cout<<"employee's Paid Vacation Days, Unpaid Vacation Days, and Sick Days "
        <<"taken."<<endl;
    cout<<"Please enter the maximum amount of Paid Vacation"<<endl;
    cin>>maxvac;
    cout<<"Please enter the maximum amount of Unpaid Vacation"<<endl;
    cin>>maxpaid;
    cout<<"Please enter the maximum amount of Sick Days"<<endl;
    cin>>maxsick;
    cout<<"Please enter the employees Paid Vacation days taken"<<endl;
    cin>>empvac;
    cout<<"Please entr the employee's Unpaid Vacation Days taken"<<endl;
    cin>>emppaid;
    cout<<"Please enter the employee's Sick Days taken"<<endl;
    cin>>empsick;
    check.SetMaxSick(maxsick);
    check.SetMaxVac(maxvac);
    check.SetMaxUnpd(maxpaid);
    check.SetSickTake(empsick);
    check.SetVacTake(empvac);
    check.SetUnpaidTk(emppaid);
    cout<<"Max Paid Vacation "<<check.GetMaxVac()<<endl;
    cout<<"Max Unpaid Vacation "<<check.GetMaxUnpd()<<endl;
    cout<<"Max Sick Days "<<check.GetMaxSick()<<endl;
    cout<<"Employee's Paid Vacation Taken "<<check.GetVacTake()<<endl;
    cout<<"Employee's Unpaid Vacation Taken "<<check.GetUnpaidTk()<<endl;
    cout<<"Employee's Sick Days "<<check.GetSickTake()<<endl;
    return 0;
}

