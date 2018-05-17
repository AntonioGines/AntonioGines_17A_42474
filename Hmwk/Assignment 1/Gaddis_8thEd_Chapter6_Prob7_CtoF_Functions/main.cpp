/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float Convert(int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float Celc;
    
    //Input or initialize values Here
    cout<<"This program is designed to convert 0 to 20 degrees Celsius"
        <<" into to Fahrenheit"<<endl;
    
    //Process/Calculations Here
    cout<<"F"<<setw(7)<<"C"<<endl;
    for(int i=0;i<=20;i++){
        Celc=Convert(i);
        cout<<i<<setw(13)<<fixed<<setprecision(4)<<showpoint<<Celc<<endl;
    }
    
    //Output Located Here

    //Exit
    return 0;
}

float Convert(int n){
    float Cel;
    Cel=(5.0f/9.0f)*(n-32);
    //cout<<Cel<<endl;
    return Cel;
}