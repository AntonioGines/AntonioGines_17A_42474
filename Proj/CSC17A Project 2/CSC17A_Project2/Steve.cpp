/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on May, 7 , 2018, 11:28 PM
 * Purpose:  Blackjack 21
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#include "Steve.h"



void Steve::CreateHand(){
    for(int i=0;i<=11;i++){
        Hand[i]=rand()%10+1;
        cout<<Hand[i]<<endl;
    }
}

int Steve::AmntBet(int){
    Bet=rand()%35+15;
    Wallet-=Bet;
}