/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on May, 7 , 2018, 11:28 PM
 * Purpose:  Blackjack 21
 */

#ifndef STEVE_H
#define STEVE_H

class Steve{
    private:
        static int Count;
        int Wallet=1000;
        int Hand[12];
        int Bet;
    public:
        Steve(){
            cout<<"Steve has joined you at the table."<<endl;
        }
        void CreateHand();
        int AmntBet(int);
        int NewTotal();
        bool LeaveTbl(int Wallet);
        int GetWallet(){
            return Wallet;
        }
        int GetHand(){
            return *Hand;
        }
        int GetBet(){
            return Bet;
        }
};

#endif /* STEVE_H */

