/* 
 * file:   main.cpp
 * Author: Antonio GInes
 * Created on March 30, 2018, 12:10 PM
 * Purpose:  Weather Statistics
 */

//System Libraries Here
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here
#include "Weather.h"

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

int main(int argc, char** argv) {
    Weath month[12];
    int Tot,YearAvg;
    string name[12]={"January", "February", "March", "April", "May", "June",
                    "July", "August", "September", "October", "November",
                    "December"};
    
    cout<<"This Program is designed to record Weather Data for a month. "<<endl;
    cout<<"Please enter in order: Total Rainfall, Highest Temperature, "
        <<" and Lowest Temperature"<<endl;

    for(int i=0;i<=11;i++){
        cout<<name[i]<<":"<<endl;
        cin>>month[i].total;
        cin>>month[i].high;
        while(month[i].high<-100||month[i].high>140){
            cin>>month[i].high;
            if(month[i].high<-100||month[i].high>140){
                cout<<"ERROR"<<endl;
            }
        }
        cin>>month[i].low;
        while(month[i].low<-100||month[i].low>140){
            cin>>month[i].low;
            if(month[i].low<-100||month[i].low>140){
                cout<<"ERROR"<<endl;
            }
        }
        month[i].avg=(month[i].low+month[i].high)/2;
    }
    
    int highest=month[0].high;
    int lowest=month[0].high;
    string highmth;
    string lowmth;
    
    for(int i=0;i<=11;i++){
        if (month[i].high>highest){
            highest=month[i].high;
            highmth=name[i];
        }
        if (month[i].low<lowest){
            lowest=month[i].low;
            lowmth=name[i];
        }
        
    }
    
    for(int i=0;i<=11;i++){
        cout<<name[i]<<endl;
        cout<<"Total Rainfall:"<<month[i].total;
        cout<<"Highest Temperature"<<month[i].low<<endl;
        cout<<"Lowest Temperature"<<month[i].high<<endl;
        cout<<"Average Temperature"<<month[i].avg<<endl;
        cout<<endl;
        YearAvg+=month[i].avg;
        Tot+=month[i].total;
    }
    cout<<"The total yearly rainfall was "<<Tot<<endl;
    cout<<"The month with the highest temperature was "<<highmth<<" and it was "
        <<highest<<" degrees fahrenheit"<<endl;
    cout<<"The month with the lowest temperature was "<<lowmth<<" and it was "
        <<lowest<<" degrees fahrenheit"<<endl;
    YearAvg/=12;
    cout<<"The monthly average rainfall was: "<<YearAvg<<endl;
    return 0;
}
