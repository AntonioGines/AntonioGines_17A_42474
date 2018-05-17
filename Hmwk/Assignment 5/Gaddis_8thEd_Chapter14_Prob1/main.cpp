/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on May 4, 2018, 9:42 AM
 * Purpose:  Converting Numbers to English
 */
#include <cstdlib>
using namespace std;

//User Libraries
#include "Convert.cpp"
#include "Number.h"

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

int main(int argc, char** argv) {
    //Declare Variables
    int number;
    Number info;
    
    cout<<"This program is designed to convert a number between 0 and 9999 into"
        <<" its English language equivalent."<<endl;
    cout<<"PLease enter a number between 0 and 9999"<<endl;
    cin>>number;
    info.SetNum(number);
    
    cout<<"That number translates to ";
    info.Convert(info.GetNum());
    
    return 0;
}

