/* 
 * file:   main.cpp
 * Author: Antonio GInes
 * Created on March 30, 2018, 2:30 PM
 * Purpose:  Soccer Scores
 */

//System Libraries Here
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here
#include "Soccer.h"

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

int main(int argc, char** argv) {
    Kick label[12];
    int Tot,YearAvg;
    

    for(int k=0;k<=11;k++){
        label[k].number=0;
        label[k].score=0;
        cout<<"Player "<<k+1<<endl;
        getline(cin, label[k].name);
        cin>>label[k].number;
        cin>>label[k].score;
        cin.ignore();
        Tot+=label[k].score;
    }

    cout<<"Name"<<setw(10)<<"Number"<<setw(10)<<"Score"<<endl;
    for(int j=0;j<=11;j++){
        cout<<label[j].name<<setw(10)<<label[j].number<<setw(10)
            <<label[j].score<<endl;
    }cout<<endl;
    cout<<"Total Scores: "<<Tot<<endl;

    return 0;
}
