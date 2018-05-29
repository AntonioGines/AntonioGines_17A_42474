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
#include "DadSon.h"

void Dad::CreateHand(){
    for(int i=0;i<=11;i++){
        Hand[i]=rand()%10+1;
        //cout<<Hand[i]<<endl;
    }
}

int Dad::AmntBet(){
    Bet=rand()%35+15;
    cout<<"The father placed a bet of $"<<Bet<<endl;
}

Dad Dad::operator + (const Dad &right){
    Dad temp;
    temp.Wallet = Wallet+right.Wallet;
    return temp;
}
ostream &operator << (ostream &strm, const Dad &check){
    strm<<"The total quantity of money between the father and the son is "
        <<check.Wallet<<endl;
    return strm;
}

Son::~Son(){
    cout<<"Thank you all for playing!"<<endl;
}

int Son::AmntBet(){
    Bet=rand()%35+15;
    cout<<"The son placed a bet of $"<<Bet<<endl;
}