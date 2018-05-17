/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on Ferbuary,3, 2018
 * Purpose:  Gradebook
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=5,TEST=4;
    int score[SIZE][TEST],total;
    float average[SIZE];
    string names[SIZE];
    
    //Initialize Variables
    
    //Input
    cout<<"This program retains the names of five students as well as "<<endl;
    cout<<"their test scores and output their letter grade for each test"<<endl;
    
    //Process
    for(int i=0;i<=SIZE-1;i++){
        cout<<"Please enter the name of student number "<<i+1<<endl;
        cin>>names[i];
    }
    for(int i=0;i<=SIZE-1;i++){
        for(int j=0;j<=TEST-1;j++){
        cout<<"Please enter test score number "<<j+1<<" for "<<names[i]<<endl;
        cin>>score[i][j];
        }
    }
    for(int i=0;i<=SIZE-1;i++){
        total=0;
        for(int j=0;j<=TEST-1;j++){
        total+=score[i][j];
        average[i]=(total/4.0f);
        }
        cout<<"The numerical average for "<<names[i]<<" is "<<average[i]<<endl;
    }
    for(int i=0;i<=SIZE-1;i++){
        if(average[i]>=0&&average[i]<=59){
            cout<<names[i]<<" had a letter grade average of an F."<<endl;
        }else if(average[i]>60&&average[i]<=69){
            cout<<names[i]<<" had a letter grade average of a D."<<endl;
        }else if(average[i]>69&&average[i]<=79){
            cout<<names[i]<<" had a letter grade average of a C."<<endl;
        }else if(average[i]>79&&average[i]<=89){
            cout<<names[i]<<" had a letter grade average of a B."<<endl;
        }else if(average[i]>89&&average[i]<=100){
            cout<<names[i]<<" had a letter grade average of an A."<<endl;
        }
    }
    
    //Output
    return 0;
}

