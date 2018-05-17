/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on Ferbuary, 4, 2018 12:00
 * Purpose:  Account Validation via Searching
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
int compare(int [], int, int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=18;
    int n,valid;
    int number[SIZE]={5658845,4520125,7895122,8777541,1302850,8080152,456255,
                      5552012,5050551,7825877,1250255,1005231,654231,3852085,
                      7576651,7881200,4581002};
    
    //Initialize Variables
    
    //Input
    cout<<"This program is designed to compare an input number to "<<endl;
    cout<<"numbers in an array and display any larger numbers."<<endl;
    cout<<"Please enter a number"<<endl;
    cin>>n;
    //Process
    valid=compare(number, SIZE, n);

    //Output
    if(valid==-1){
        cout<<"You did not enter a valid account number."<<endl;
    }else{
    cout<<n<<" is a valid account number"<<endl;
    }

    return 0;
}

int compare(int nums[], int size, int input){
    int index=0;
    int place=-1;
    bool found=false;
    while(index<size&&!found){
        if(input==nums[index]){
            found=true;
            place=index;
        }index++;
    }return place;
}