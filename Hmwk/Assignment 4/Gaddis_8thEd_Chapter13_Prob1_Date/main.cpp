/* 
 * file:   main.cpp
 * Author: Antonio GInes
 * Created on April 3, 2018, 7:30 AM
 * Purpose:  Getting the Date from a Class
 */

//System Libraries Here
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here
#include "Date.h"

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void Number(int, int, int);
void Stand(int, int, int);
void Miltary(int, int, int);
string Month(int);

int main(int argc, char** argv) {
    //Declare Variables
    int mth,dy,yr;
    
    cout<<"Please enter the current month, day, and year as numbers"<<endl;
    cout<<"Month:"<<endl;
    cin>>mth;
    while(mth<1||mth>12){
        cout<<"Please Enter a Valid Month"<<endl;
        cin>>mth;
    }
    if(mth%2==0){
        cout<<"Day:"<<endl;
        cin>>dy;
        while(dy<1||dy>31){
            cout<<"Please Enter a Valid Day"<<endl;
            cin>>dy;
        }
    }else{
        cout<<"Day:"<<endl;
        cin>>dy;
        while(dy<1||dy>30){
            cout<<"Please Enter a Valid Day"<<endl;
            cin>>dy;
        }
    }cout<<"Year:"<<endl;
    cin>>yr;
    while(yr<0){
        cout<<"Please Enter a Valid Year"<<endl;
        cin>>yr;
    }
    Date info(mth,dy,yr);
    Number(info.getDay(),info.getMonth(),info.getYear());
    Stand(info.getDay(),info.getMonth(),info.getYear());
    Miltary(info.getDay(),info.getMonth(),info.getYear());
    return 0;
}

/*************************************************************
/                                                            *
/                                                            *
/*************************************************************
*/

void Number(int d, int m, int yr){
    cout<<m<<"/"<<d<<"/"<<yr<<endl;
}

void Stand(int d, int m, int yr){
    cout<<Month(m)<<" "<<d<<","<<yr<<endl;
}

void Miltary(int d, int m, int yr){
    cout<<d<<" "<<Month(m)<<" "<<yr<<endl;
}

string Month(int n){
    string mth;
    if(n==1){
        mth="January";
    }if(n==2){
        mth="February";
    }if(n==3){
        mth="March";
    }if(n==4){
        mth="April";
    }if(n==5){
        mth="May";
    }if(n==6){
        mth="June";
    }if(n==7){
        mth="July";
    }if(n==8){
        mth="August";
    }if(n==9){
        mth="September";
    }if(n==10){
        mth="October";
    }if(n==11){
        mth="November";
    }if(n==12){
        mth="December";
    }
    return mth;
}
