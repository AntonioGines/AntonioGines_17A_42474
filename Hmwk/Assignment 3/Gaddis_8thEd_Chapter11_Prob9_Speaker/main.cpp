/* 
 * file:   main.cpp
 * Author: Antonio GInes
 * Created on March 30, 2018, 2:30 PM
 * Purpose:  Speaker
 */

//System Libraries Here
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here
#include "Bureau.h"

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

int main(int argc, char** argv) {
    Speaker label[12];   

    cout<<"This program is designed to display information about a speaker's "
        <<"bureau"<<endl;
    cout<<"Please enter information in this order:"<<endl;
    cout<<"Name: "<<endl;
    cout<<"Speaker's Topic: "<<endl;
    cout<<"Telephone Number: "<<endl;
    cout<<"Fee Required: "<<endl;
    
    for(int k=0;k<=9;k++){
        cout<<"Speaker "<<k+1<<endl;
        getline(cin, label[k].name);
        getline(cin, label[k].topic);
        getline(cin, label[k].number);
        cin>>label[k].fee;
        cin.ignore();
    }

    for(int j=0;j<=9;j++){
        cout<<"Name: "<<label[j].name<<endl;
        cout<<"Telephone Number: "<<label[j].number<<endl;
        cout<<"Speaking Topic: "<<label[j].topic<<endl;
        cout<<"Fee Required: "<<endl;
    }cout<<endl;

    return 0;
}
