/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on March 31, 2018, 2:21 PM
 * Purpose:  Display lines from a text
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

int main(int argc, char** argv) {
    fstream text;
    int counter=1;
    char line[80];
    
    text.open("Head.txt", ios::in);
    if(!text){
        cout<<"Error"<<endl;
    }else{   
        while(!text.eof()&&counter<=10){
            text.getline(line, 81, '\n');
            cout<<line<<endl;
            counter++;
        }
        if (counter<10){
            cout<<"Entire File Has Been Displayed"<<endl;
        }
    }
    
    return 0;
}

