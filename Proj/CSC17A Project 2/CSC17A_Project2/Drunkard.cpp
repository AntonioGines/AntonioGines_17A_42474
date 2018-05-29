/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on May, 6 , 2018, 12:37 PM
 * Purpose:  Blackjack 21
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <valarray>
using namespace std;
#include "Drunkard.h"

void Drunkard::CreateHand(){
    for(int i=0;i<11;i++){
        Hand[i]=rand()%10+1;
    }
}

void Drunkard::DrunkBet(){
    Bet+=Bet;
    cout<<"The drunkard, in his inebriated stupor doubled his bet $"<<Bet<<endl;
}

void Drunkard::AmntBet(){
    Bet=rand()%200+15;
    while(Wallet-Bet<15){
        Bet=rand()%200+15;
    }
    cout<<"The drunkard made of bet of $"<<Bet<<endl;
}