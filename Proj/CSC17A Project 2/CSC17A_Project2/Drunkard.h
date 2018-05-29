/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on May, 6 , 2018, 12:37 PM
 * Purpose:  Blackjack 21
 */

#ifndef DRUNKARD_H
#define DRUNKARD_H

class Alcoholism{
protected:
    int Wallet=500;
    int Hand[12];
    int Bet;
    bool Left=false;   
public:
    virtual void AmntBet(){};
    virtual void CreateHand(){};
    virtual void DrunkBet(){};
    virtual void NewWallet(){};
    virtual int GetWallet(){return 0;}
    virtual int GetBet(){return 0;}
    virtual int GetHand(){return 0;}
    virtual bool GetLeft(){return 0;}
};

class Drunkard : public Alcoholism{
public:
    Drunkard(){};
    void AmntBet();
    void CreateHand();
    void DrunkBet();
    void NewWallet(int n){
        Wallet-=n;
    }
    int GetWallet(){
        return Wallet;
    }
    int GetBet(){
        return Bet;
    }
    int GetHand(int crd){
        return *(Hand+crd);
    }
    bool GetLeft(){
        return Left;
    }
};
#endif /* DRUNKARD_H */