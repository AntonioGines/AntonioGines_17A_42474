/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Drunkard.h
 * Author: anton
 *
 * Created on May 24, 2018, 6:36 PM
 */

#ifndef DRUNKARD_H
#define DRUNKARD_H

class Alcoholism{
protected:
    int Wallet=1000;
    int Bet;
    bool Left=false;    
public:
    virtual int GetWallet(){return 0;}
    virtual int GetBet(){return 0;}
};

class Drunkard : public Alcoholism{
public:
    
};



#endif /* DRUNKARD_H */

