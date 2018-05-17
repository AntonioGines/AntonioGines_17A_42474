/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on March 31, 2018, 1:10 PM
 * Purpose:  Average Words in a String
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
float count(char*);
float wcount(char*);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char array[80];
    
    //Input or initialize values Here
    cout<<"Input a sentence with a max of 80 characters"<<endl;
    cin.getline(array, 80);
    
    //Process/Calculations Here
    cout<<"There were "<<count(array)<<" words in your sentence."<<endl;
    cout<<"There were an average of "<<fixed<<setprecision(2)
        <<wcount(array)/count(array)<<showpoint<<" letters per word."<<endl;
    
    //Output Located Here

    //Exit
    return 0;
}

float count(char* Array){
    int count=1;
    for(int i=0;i<=strlen(Array);i++){
        if(*(Array+i)==' '){
            count++;
        }
    }
    return count;
}

float wcount(char* Array){
    int count1=0;
    for(int i=0;i<=strlen(Array)-1;i++){
        if(*(Array+i)!=' '){
            count1++;
            cout<<count1<<endl;
        }
    }
    return count1;
}