/* 
 * file:   main.cpp
 * Author: Antonio GInes
 * Created on March 30, 2018, 11:13 AM
 * Purpose:  Corporate Sales
 */

//System Libraries Here
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here
#include "Corp.h"

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void Output(Corprte);
float Sum(Corprte);

int main(int argc, char** argv) {
    //Declare Variables
    Corprte num;
    cout<<"This program displays your sales for the 4 fiscal quarters"<<endl;
    cout<<"Enter your sales for the first quarter"<<endl;
    cin>>num.first;
    cout<<"Enter your sales for the second quarter"<<endl;
    cin>>num.second;
    cout<<"Enter your sales for the third quarter"<<endl;
    cin>>num.third;
    cout<<"Enter your sales for the fourth quarter"<<endl;
    cin>>num.fourth;
    Output(num);

    return 0;
}

void Output(Corprte n){
    cout<<"First Quarter: "<<n.first<<endl;
    cout<<"Second Quarter: "<<n.second<<endl;
    cout<<"Third Quarter: "<<n.third<<endl;
    cout<<"Fourth Quarter: "<<n.fourth<<endl;
    cout<<"Total Annual Sales: "<<Sum(n)<<endl;
    cout<<"Average Quarterly Sales: "<<(Sum(n))/4<<endl;
}

float Sum(Corprte g){
    float sum;
    sum=g.first+g.second+g.third+g.fourth;
    
    return sum;
}