/* 
 * file:   main.cpp
 * Author: Antonio GInes
 * Created on March 30, 2018, 3:50 PM
 * Purpose:  Account Information with a search
 */

//System Libraries Here
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here
#include "Account.h"

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

int main(int argc, char** argv) {
    Info label[10];
    int Tot,YearAvg,i;
    char Confirm;
    
    cout<<"This program is designed to take in account information. "<<endl;
    cout<<"Please enter the information in this order:"<<endl;
    cout<<"Name"<<endl;
    cout<<"Address"<<endl;
    cout<<"City, State, ZIP"<<endl;
    cout<<"Telephone Number"<<endl;
    cout<<"Account Balance"<<endl;
    cout<<"Date of Last Payment"<<endl;
    

    for(int k=0;k<=11;k++){
        label[k].number=0;
        label[k].balance=0;
        label[k].number=0;
        cout<<"Account "<<k+1<<endl;
        getline(cin, label[k].name);
        getline(cin, label[k].address);
        getline(cin, label[k].city);
        cin>>label[k].number;
        cin>>label[k].balance;
        cin>>label[k].date;        
        cin.ignore();
    }
    cout<<"Would you like to change any info you have entered? Type Y if yes "
        <<"and N if no"<<endl;
    cin>>Confirm;
    if(Confirm=='Y'){
        while (Confirm=='Y'){
            cout<<"Which account would you like to re-enter information for?"
                <<endl;
            cin>>i;
            while(i<1||i>10){
                cin>>i;
            }
            cout<<"Please re-enter info for account "<<i<<endl;
            label[i-1].number=0;
            label[i-1].balance=0;
            label[i-1].number=0;
            getline(cin, label[i-1].name);
            getline(cin, label[i-1].address);
            getline(cin, label[i-1].city);
            cin>>label[i-1].number;
            cin>>label[i-1].balance;
            cin>>label[i-1].date;        
            cin.ignore();
            cout<<"Is there any other account you would like to alter?"<<endl;
            cin>>Confirm;
        }
    }
    
    cout<<"The information you have entered will now be redisplayed"<<endl;
    for(int j=0;j<=11;j++){
        cout<<"Account"<<1+j<<endl;
        cout<<"Name: "<<label[j].name<<endl;
        cout<<"Address: "<<label[j].address<<endl;
        cout<<"City, State, Zip: "<<label[j].city<<endl;
        cout<<"Telephone Number : "<<label[j].number<<endl;
        cout<<"Account Balance: "<<label[j].balance<<endl;
        cout<<"Date of Last Payment: "<<label[j].date<<endl;
    }

    return 0;
}
