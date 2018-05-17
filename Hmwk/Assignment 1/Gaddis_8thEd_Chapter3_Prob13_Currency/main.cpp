/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on February 14, 2018, 11:16 AM
 * Purpose:  Currency Conversion
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float Dollar,Yen,Euro,YenDolr,EroDolr;
    
    //Input or initialize values Here
    YenDolr=.0094;
    EroDolr=1.24;
    
    
    //Input Conversion formula
    cout<<"Please Input the amount of US Dollars You want to convert "
        <<"to Yen and Euros."<<endl;
    cin>>Dollar;
    
    //Process/Calculations Here
    Yen=Dollar/YenDolr;
    Euro=Dollar/EroDolr;
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint<<Dollar<<" Dollars = "<<fixed
        <<setprecision(2)<<showpoint<<Yen<<" Yen "<<endl;
    cout<<fixed<<setprecision(2)<<showpoint<<Dollar<<" Dollars = "<<fixed
        <<setprecision(2)<<showpoint<<Euro<<" Euro "<<endl;
    //Exit
    return 0;
}