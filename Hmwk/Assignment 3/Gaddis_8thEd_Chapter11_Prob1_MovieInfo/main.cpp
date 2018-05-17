/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on March 26, 2018, 10:09 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here
#include "Movie.h"

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void OutChar(MoviDat);


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    MoviDat label;
    
    //Input or initialize values Here
    cout<<"Input the name of a movie"<<endl;
    getline(cin, label.name);
    
    cout<<"Enter the name of the director"<<endl;
    getline(cin, label.directr);
    
    cout<<"Enter the year the movie was released"<<endl;
    cin>>label.YrRelse;
    
    cout<<"Enter the length of the movie in minutes"<<endl;
    cin>>label.length;
    cout<<endl;
    
    //Process/Calculations Here
    OutChar(label);
    //Output Located Here

    //Exit
    return 0;
}

void OutChar(MoviDat g){
    cout<<"Title of Movie: "<<g.name<<endl;
    cout<<"Director: "<<g.directr<<endl;
    cout<<"Year Released: "<<g.YrRelse<<endl;
    cout<<"Length of Movie: "<<g.length<<endl;
}
