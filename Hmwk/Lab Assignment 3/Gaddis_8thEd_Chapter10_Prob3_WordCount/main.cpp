/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on March 31, 2018, 12:20 PM
 * Purpose:  Word Count
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
int count(char*);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char array[80];
    
    //Input or initialize values Here
    cout<<"Input a sentence with a max of 80 characters"<<endl;
    cin.getline(array, 80);
    
    //Process/Calculations Here
    cout<<"There were "<<count(array)<<" words in your sentence."<<endl;
    
    //Output Located Here

    //Exit
    return 0;
}

int count(char* Array){
    int count=1;
    for(int i=0;i<=strlen(Array);i++){
        if(*(Array+i)==' '){
            count++;
        }
    }
    return count;
}
