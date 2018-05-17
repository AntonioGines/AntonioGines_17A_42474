/* 
 * file:   main.cpp
 * Author: Antonio GInes
 * Created on April 4, 2018, 2:15 PM
 * Purpose:  Personal Information
 */

//System Libraries Here
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here
#include "Info.h"

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

int main(int argc, char** argv) {
    //Declare Variables
    int age, number;
    string name, address;
    
    //Input
    cout<<"Please enter your name, address, age, and phone number."<<endl;
    cout<<"Name:"<<endl;
    cin>>name;
    cout<<"Address:"<<endl;
    cin>>address;
    cout<<"Age:"<<endl;
    cin>>age;
    cout<<"Number"<<endl;
    cin>>number;
    Info me(name,address,age,number);
    cout<<"Name: "<<me.getName()<<endl;
    cout<<"Address: "<<me.getAddress()<<endl;
    cout<<"Age: "<<me.getAge()<<endl;
    cout<<"Number: "<<me.getNum()<<endl;
    
    cout<<"Please enter a family member's name, address, age, and phone number."
        <<endl;
    cout<<"Name:"<<endl;
    cin>>name;
    cout<<"Address:"<<endl;
    cin>>address;
    cout<<"Age:"<<endl;
    cin>>age;
    cout<<"Number"<<endl;
    cin>>number;
    Info family(name,address,age,number);
    cout<<"Name: "<<family.getName()<<endl;
    cout<<"Address: "<<family.getAddress()<<endl;
    cout<<"Age: "<<family.getAge()<<endl;
    cout<<"Number: "<<family.getNum()<<endl;
    
    cout<<"Please enter your name, address, age, and phone number."<<endl;
    cout<<"Name:"<<endl;
    cin>>name;
    cout<<"Address:"<<endl;
    cin>>address;
    cout<<"Age:"<<endl;
    cin>>age;
    cout<<"Number"<<endl;
    cin>>number;
    Info friends(name,address,age,number);
    cout<<"Name: "<<friends.getName()<<endl;
    cout<<"Address: "<<friends.getAddress()<<endl;
    cout<<"Age: "<<friends.getAge()<<endl;
    cout<<"Number: "<<friends.getNum()<<endl;
    
    
    return 0;
}