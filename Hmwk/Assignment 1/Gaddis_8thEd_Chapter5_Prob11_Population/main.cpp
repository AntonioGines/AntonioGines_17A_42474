/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 29, 2018, 4:30 PM
 *Purpose: First Program Hello World
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Variables

//User Libraries

//Function Prototypes

int main(int argc, char** argv) {
    //Declare Variables
    int days,popltn;
    float incrse;
    
    //Initialize Variables
    
    //Input
    cout<<"This program is designed to calculate the increase of a "<<endl;
    cout<<"population of organisms based on the factors: The base quantity of"
            <<" organisms, daily population increase, and the given quantity"
            <<" of time"<<endl;
    cout<<"Enter the base size of the population"<<endl;
    cin>>popltn;
    cout<<"Enter the daily size increase as a percent"<<endl;
    cin>>incrse;
    cout<<"Enter the quantity of days in which this increase occurs"<<endl;
    cin>>days;
    
    //Process
    for(int i=1;i<=days;i++){
        popltn+=(popltn*(incrse/100));
        cout<<"The population increases to "<<popltn<<" after "<<i<<endl;
    }
        
    return 0;
}

