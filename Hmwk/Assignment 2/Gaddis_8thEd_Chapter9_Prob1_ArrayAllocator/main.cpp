/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on March 14, 2018, 10:50 AM
 * Purpose:  Create a Dynamically Allocated Array
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int *nums=nullptr,
            total=0.0,
            average;
    int number, count;
    
    //Input or initialize values Here
    cout<<"How many numbers do you wish to input into the array?"<<endl;
    cin>>number;
    
    //Process/Calculations Here
    nums=new int[number];
     cout<<"Please enter values"<<endl;
     for(int i=0;i<=number-1;i++){
         cin>>*(nums+i);
     }
    
    //Output Located Here
     cout<<"Your input displayed using pointers is:"<<endl;
     for(int j=0;j<=number-1;j++){
         cout<<*(nums+j)<<" ";
     }
     
     delete []nums;
     nums=nullptr;

    //Exit
    return 0;
}

