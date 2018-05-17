/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on March 25, 2018, 2:39 PM
 * Purpose:  Backward String
 */

//System Libraries Here
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void count(string);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string array;
    
    //Input or initialize values Here
    cout<<"Input a sentence"<<endl;
    getline(cin, array);
    
    //Process/Calculations Here
    count(array);
    
    //Output Located Here

    //Exit
    return 0;
}

void count(string array){
    string Narray;
    for(int i=0;i<=array.length();i++){
        Narray[i]=array[array.length()-i];
    }
    for(int i=0;i<=array.length();i++){
        cout<<Narray[i];
    }
}
