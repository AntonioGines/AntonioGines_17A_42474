/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on March 31, 2018, 3:36 PM
 * Purpose:  Display the last 10 lines from a text file
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
    int count=0;
    int lcount=0;
    string line;
    
    text.open("Head.txt", ios::in);
    if(!text){
        cout<<"Error"<<endl;
    }else{   
        while(!text.eof()){
            getline(text, line);
            count++;
        }text.close();
    }text.open("Head.txt", ios::in);
    if(count<10){
        while(!text.eof()){
                getline(text,line);
                cout<<line<<endl;
        }
    }else{
        count-=12;
        while(!text.eof()){
            if(lcount!=count){
                getline(text,line);
                lcount++;
            }
            else{
                getline(text,line);
                cout<<line<<endl;
            }
        }
        
    }
    return 0;
}

