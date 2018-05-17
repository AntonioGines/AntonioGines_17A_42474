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
    int date;
    Date check;
    
    cout<<"This program is designed to take an integer between 1 and 365 "
        <<"and convert it to a date."<<endl;
    cout<<"Please enter a number between 1-365"<<endl;
    cin>>date;
    check.SetDate(date);
    check.Convert(check.GetDate());
    
    
    
    return 0;
}

