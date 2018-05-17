/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on March 14, 2018, 11:15 AM
 * Purpose:  Create a Dynamically Allocated Array
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void sort(int *,string *,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int *test=nullptr,
            total=0.0,
            average;
    string *name=nullptr;
    int number, count;
    
    //Input or initialize values Here
    cout<<"Please enter the number of tests you want to grade"<<endl;
    cin>>number;
    
    //Process/Calculations Here
    test=new int[number];
    name=new string[number];
    cout<<"Please enter the name for each student and their score"<<endl;
    for(int i=0;i<=number-1;i++){
        cin>>*(name+i);
        cin>>*(test+i);
    }
    
    //Output Located Here
    sort(test,name,number);
    cout<<"The sorted tests look like:"<<endl;
    for(int n=0;n<=number-1;n++){
        cout<<*(name+n)<<": "<<*(test+n)<<" "<<endl;
    }
     
    delete []test;
    delete []name;
    test=nullptr;
    name=nullptr;

    //Exit
    return 0;
}

void sort(int *test,string *name,int num){
    for(int j=0;j<=num;j++){
        for(int k=j+1;k<=num-1;k++){
            if(*(test+j)<*(test+k)){
                int temp=*(test+j);
                *(test+j)=*(test+k);
                *(test+k)=temp;
                string tem=*(name+j);
                *(name+j)=*(name+k);
                *(name+k)=tem;
            }
        }
    }
}

