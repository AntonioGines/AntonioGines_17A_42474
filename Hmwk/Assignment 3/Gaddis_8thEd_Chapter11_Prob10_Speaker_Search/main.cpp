/* 
 * file:   main.cpp
 * Author: Antonio GInes
 * Created on March 30, 2018, 2:30 PM
 * Purpose:  Soccer Scores
 */

//System Libraries Here
#include <cstdlib>
#include <iomanip>
#include <cstring>
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
    string check,result,name,num,top,feeReqd;
    
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
    
    cout<<"Please enter the topic you would like to listen to."<<endl;
    getline(cin, check);
    
    bool compare=false;
    for(int i=0;i<=9;i++){
        if(strcmp(check.c_str(),label[i].topic.c_str())==0){
            compare=true;
            name=label[i].name;
            num=label[i].number;
            top=label[i].topic;
            feeReqd=label[i].fee;
        }
    }
    if(compare=true){
        cout<<"Here is info from the speaker of your selected topic"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Telephone Number: "<<num<<endl;
        cout<<"Speaking Topic: "<<top<<endl;
        cout<<"Fee Required: "<<feeReqd<<endl;
    }

    for(int j=0;j<=9;j++){
        cout<<"Name: "<<label[j].name<<endl;
        cout<<"Telephone Number: "<<label[j].number<<endl;
        cout<<"Speaking Topic: "<<label[j].topic<<endl;
        cout<<"Fee Required: "<<endl;
    }cout<<endl;

    return 0;
}
