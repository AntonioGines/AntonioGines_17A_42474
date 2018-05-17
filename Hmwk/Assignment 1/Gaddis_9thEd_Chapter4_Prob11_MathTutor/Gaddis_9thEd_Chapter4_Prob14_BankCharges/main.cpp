/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 16, 2018, 6:34 PM
 * Purpose: To calulate the amount of fees made on a checking account
 */
#include<iostream>
#include <cstdlib>
#include<iomanip>

using namespace std;
int main(int argc, char** argv) {
    //Declare Variables
    float checks,//number of checks
            invest,//initial investment
            base,//base fee for having the account
            under,//additional fee if checking account id under 400
            cost;//Total Cost this month
    //Constants
    base=10;
    under=15;
    //Input
    cout<<"This program is designed to calculate the amount of fees on"
        <<" one's checking account."<<endl;
    cout<<"How much money do you currently have in your account in USD?"<<endl;
    cin>>invest;
    cout<<"How many checks have you written this month?"<<endl;
    cin>>checks;
    
    //Process
    if(invest<0)
    {
        cout<<"Urgent:Your account is overdrawn!"<<endl;
    }
    if(invest<400)
    {
        if (checks<20)
        {
            cost=(checks*.10)+base+under;
            cout<<"You have a monthly checking account fee of $ "
                <<fixed<<setprecision(2)<<showpoint<<cost<<endl;
        }
        if (checks>=20&&checks<=39)
        {
            cost=(checks*.08)+base+under;
            cout<<"You have a monthly checking account fee of $ "
                <<fixed<<setprecision(2)<<showpoint<<cost<<endl;
        }
        if (checks>=40&&checks<=59)
        {
            cost=(checks*.06)+base+under;
            cout<<"You have a monthly checking account fee of $ "
                <<fixed<<setprecision(2)<<showpoint<<cost<<endl;
        }
        if (checks>60)
        {
            cost=(checks*.04)+base+under;
            cout<<"You have a monthly checking account fee of $ "
                <<fixed<<setprecision(2)<<showpoint<<cost<<endl;
        }
    }
    else if(invest>400)
    {
                if (checks<20)
        {
            cost=(checks*.10)+base;
            cout<<"You have a monthly checking account fee of $ "
                <<fixed<<setprecision(2)<<showpoint<<cost<<endl;
        }
        if (checks>=20&&checks<=39)
        {
            cost=(checks*.08)+base;
            cout<<"You have a monthly checking account fee of $ "
                <<fixed<<setprecision(2)<<showpoint<<cost<<endl;
        }
        if (checks>=40&&checks<=59)
        {
            cost=(checks*.06)+base;
            cout<<"You have a monthly checking account fee of $ "
                <<fixed<<setprecision(2)<<showpoint<<cost<<endl;
        }
        if (checks>60)
        {
            cost=(checks*.04)+base;
            cout<<"You have a monthly checking account fee of $ "
                <<fixed<<setprecision(2)<<showpoint<<cost<<endl;
        }
    }

    return 0;
}

