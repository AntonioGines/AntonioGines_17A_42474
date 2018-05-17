/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 17, 2016, 12:52 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char Medium, //The Medium by which sound will travel
            dm;  //Dummy
    float dist,    //The distance the wave will travel
          time;    //How long it will take depending on the medium and distance
    
    //Input or initialize values Here
    cout<<"This program is designed to determine how long it will take"
        <<" for sound to travel a desired distance based on the medium it"
        <<" travels through."<<endl;
    cout<<"How much distance do you want it to cover(in feet)? Use up to "
        <<"2 decimal places?"<<endl;
    cin>>dist;
    if(dist<0)cout<<"This is not a viable distance, please re-run and try again"
                  <<endl;
    if(dist<0)exit(0);
    
    cout<<"Is the sound wave traveling through Air, Water, or Steel?"<<endl;
    cin>>Medium>>dm;
    
    //Process/Calculations Here
    if(Medium=='A'||Medium=='a'){
        time=dist/1100;
    }else if(Medium=='W'||Medium=='w'){
        time=dist/4900;
    }else if(Medium=='S'||Medium=='s'){
        time=dist/1640;
    }
    
    //Output Located Here
    cout<<"It will take approximately "<<fixed<<setprecision(6)<<showpoint
        <<time<<" seconds to travel "<<fixed
        <<setprecision(2)<<showpoint<<dist<<" feet."<<endl;

    //Exit
    return 0;
}

