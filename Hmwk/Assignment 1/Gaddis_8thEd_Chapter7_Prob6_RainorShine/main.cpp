/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Display how many Rainy,Cloudy,and Sunny Days there were in a month
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int COLUMN1=31;
const int COLUMN2=30;
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void August(int[][COLUMN1]);
void June(int[]);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int MONTH1=2;
    int MONTH2=1;
    int Rain,Sun,Cloud,Rain1,Sun1,Cloud1,count,temp1,temp2;
    int Aug[MONTH1][COLUMN1];
    int Jun[30];
    //Seed Random Number Generator
    srand(static_cast<int>(time(0)));
    
    //Input or initialize values Here
    temp1=temp2=count=Rain1=Sun1=Cloud1=0;
    August(Aug);
    June(Jun);
    
    //Process/Calculations Here
    int count1=0;
    for(int x=0;x<=COLUMN2;x++){
        if(Jun[x]==0){
            Rain1++;
        }else if(Jun[x]==1){
            Sun1++;
        }else if(Jun[x]==2){
            Cloud1++; 
        }
    }count++;
    temp1=count;
    temp2=Rain;
    cout<<"The amount of Rainy Days in month "<<count<<" was "<<Rain1<<endl;
    cout<<"The amount of Sunny Days in month "<<count<<" was "<<Sun1<<endl;
    cout<<"The amount of Cloudy Days in month "<<count<<" was "<<Cloud1<<endl;
    cout<<endl;
    for(int n=0;n<=1;n++){
        Rain=Sun=Cloud=0;
        for(int h=0;h<=COLUMN1-1;h++){
            if(Aug[n][h]==0){
                Rain++;
            }else if(Aug[n][h]==1){
                Sun++;
            }else if(Aug[n][h]==2){
                Cloud++;
            }
        }count++;
        if(Rain>temp2){
            temp2=Rain;
            temp1=count;
        }
        cout<<"The amount of Rainy Days in month "<<count<<" was "<<Rain
             <<endl;
        cout<<"The amount of Sunny Days in month "<<count<<" was "<<Sun
            <<endl;
        cout<<"The amount of Cloudy Days in month "<<count<<" was "<<Cloud
            <<endl;
        cout<<endl;
    }
    cout<<"The month with the greatest amount of rain is "<<temp1<<endl;
    
    //Output Located Here

    //Exit
    return 0;
}

void June(int Jun[]){
        for(int j=0;j<=30-1;j++){
            Jun[j]=rand()%3;
        }                                 
    }



void August(int Aug[][COLUMN1]){
    for(int i=0;i<=1;i++){
        for(int j=0;j<=COLUMN1-1;j++){
            Aug[i][j]=rand()%3;    
    }
}
}

