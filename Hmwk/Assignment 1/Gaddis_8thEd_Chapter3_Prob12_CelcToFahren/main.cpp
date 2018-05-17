/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on February 14, 2018, 11:07 AM
 * Purpose:  Celsius to Fahrenheit
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float degF,
          degC,
          degChk;
    float x1,x2,y1,y2;
    
    //Input or initialize values Here
    x1=32;//Interpolation 32 degrees Fahrenheit
    x2=212;//Interpolation 212 degrees Fahrenheit
    y1=0;//Interpolation 0 degrees centigrade
    y2=100;//Interpolation 100 degrees centigrade
    
    //Input the temperature to convert
    cout<<"Input the temperature in degrees Fahrenheit "<<endl;
    cout<<"to convert to degrees Celsius"<<endl;
    cin>>degF;
    
    //Process/Calculations Here
    degC=(degF-32)*5/9;
    
    //Output Located Here
    cout<<degF<<" degrees Fahrenheit = "
        <<degC<<" degrees Celsius"<<endl;
    //Exit
    return 0;
}