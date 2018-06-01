/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on May, 7 , 2018, 11:28 PM
 * Purpose:  Blackjack 21
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;
#include "Steve.h"

int Steve::SetName(int n){
    string name;
    cout<<"Please enter the name for player "<<n+1<<endl;
    cin>>name;
    *Name=name;
    //Create Exception if Any Numbers Are Entered
        try{
            //Get Name at Individual Points
            NameCheck(name);
        }
        //If A Number Is Found in the String end Program
        catch(string Check){
            cout<<Check<<endl;
            exit(0);
        }    
    }

void Steve::NameCheck(string n){
    //Compare String to Character Array of Numbers
    char const* c="0123456789";
    //For Each Letter Compare to See if Numbers appear
    for(int h=0;h<=sizeof(n)-1;h++){
        for(int num=0;num<=10-1;num++){
            if((n[h])==*(c+num)){
                string Check="Error: You Entered A Number";
                //Throw If Numbers Caught
                throw Check;
            }
        }
    }
}

void Steve::CreateHand(){
    for(int i=0;i<11;i++){
        Hand[i]=rand()%10+1;
    }
}

bool Steve::LeaveTbl(){
    if(Wallet==0&&Left==false){
        Left=true;
        TurnCnt--;
        cout<<"There are now "<<TurnCnt<<"AI player left in the games"<<endl;
        return Left;
    }
}

int Steve::AmntBet(){
    Bet=rand()%200+15;
    while(Wallet-Bet<15){
        Bet=rand()%200+15;
    }
    cout<<*Name<<" placed a bet of $"<<Bet<<endl;
}

void Steve::DestrName(){
    delete Name;
}

Steve& Steve::operator += (const Steve& right){
    Steve temp(0);
    this->Wallet+=right.Wallet;
    return *this;
}
float Steve::TurnCnt = 0;