/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on February 28, 2018, 10:21 AM
 * Purpose:  How Many Days in a Month
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
    int days,month,year,ans;
    
    //Input or initialize values Here
    cout<<"This program is designed to display the amount of days in a "<<endl;
    cout<<"based on the month and year you input"<<endl;
    cout<<"Enter a month (1-12): ";
    cin>>month;
    cout<<"Enter a year: ";
    cin>>year;
    
    //Process/Calculations Here
    if(year%100==0&&year%400==0&&month==2){
        cout<<"29 days"<<endl;
    }
    else if(year%100!=0&&year%4==0&&month==2){
        cout<<"29 days"<<endl;
    }else if(month==1||month==3||month==5||month==7||month==8||month==10
             ||month==12){
        cout<<"31 Days"<<endl;
    }else if(month==4||month==6||month==9||month==11){
        cout<<"30 Days"<<endl;
    }else if(month==2&&year%100!=0&&year%4!=0){
        cout<<"28 Days"<<endl;
    }
    
    //Output Located Here

    //Exit
    return 0;
}

