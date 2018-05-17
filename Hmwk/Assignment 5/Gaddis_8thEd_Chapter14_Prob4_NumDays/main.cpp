/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on May 4, 2018, 11:19 AM
 * Purpose:  Number of Days
 */
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
#include "Number.cpp"
#include "Number.h"
//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here


int main(int argc, char** argv) {
    //Declare Variables
    Days Week1,Week2,Total,L,M,N,O;
    float hrs1,hrs2,tot;
    
    //Input
    cout<<"This program is designed to convert the number of hours worked in 2 "
        <<" weeks into days."<<endl;
    cout<<"Please enter the number of hours worked in week 1"<<endl;
    cin>>hrs1;
    Week1.SetHours(hrs1);
    Week1.SetDays(hrs1);
    cout<<"Please enter the number of hours worked in week 2"<<endl;
    cin>>hrs2;
    Week2.SetHours(hrs2);
    Week2.SetDays(hrs2);
    cout<<"The amount of days worked in week 1 is "<<Week1.GetDays()<<endl;
    cout<<"The amount of days worked in week 2 is "<<Week2.GetDays()<<endl;
    cout<<"The total amount of hours worked in the 2 weeks is ";
    tot=Week1.GetHours()+Week2.GetHours();
    Total.SetHours(tot);
    cout<<Total.GetHours()<<endl;
    cout<<endl;
    cout<<"The total amount of days worked in the 2 weeks is ";
    Total.SetHours(tot);
    Total.SetDays(tot);
    cout<<Total.GetDays()<<endl;
    cout<<"The total amount of hours incremented with a prefix operator "
        <<"is ";
    L=++Total;
    cout<<Total.GetHours()<<endl;
    cout<<"The total amount of hours incremented with a postfix operator "
        <<"is ";
    M=Total++;
    cout<<Total.GetHours()<<endl;
        cout<<"The total amount of hours Decremented with a prefix operator "
        <<"is ";
    N=--Total;
    cout<<Total.GetHours()<<endl;
    cout<<"The total amount of hours Decremented with a postfix operator "
        <<"is ";
    O=Total--;
    cout<<Total.GetHours()<<endl;
    
    
    return 0;
}

