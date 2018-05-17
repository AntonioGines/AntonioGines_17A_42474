/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on March 31, 2018, 1:34 PM
 * Purpose:  Capitalize Words in a string
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
void count(char*);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char array[80];
    
    //Input or initialize values Here
    cout<<"Input a sentence with a max of 80 characters"<<endl;
    cin.getline(array, 80);
    
    //Process/Calculations Here
    count(array);
    cout<<array<<endl;

    
    //Output Located Here

    //Exit
    return 0;
}

void count(char* array){
    int count=1;
    array[0]=toupper(array[0]);
    for(int i=0;i<=strlen(array);i++){
        if(*(array+i)=='.'&&*(array+(i+1))==' '){
            *(array+(i+2))-=32;
        }
    }
}