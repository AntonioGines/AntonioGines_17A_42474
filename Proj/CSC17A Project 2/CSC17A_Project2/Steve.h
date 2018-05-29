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
        int Wallet;
        string *Name=new string();
        int Hand[12];
        int Bet;
        bool Left=false;
    public:
        //Default COnstructor
        Steve(int n){
            Wallet=n;
        }
        //Destructor
        ~Steve(){};        
        //Determine Bet
        int AmntBet();       
        //How Much Money is in the Wallet
        int NewWallet(int money){
            Wallet+=money;
            cout<<Wallet<<endl;
        }
        //Set Player Names
        int SetName(int);
        //Create Hand to Pull Cards From
        void CreateHand();
        //Determine if The Player Ran out of Money
        bool LeaveTbl(){
            if(Wallet==0){
                Left=true;
            }
        }
        //Delete Names Memory
        void DestrName();
        //Check Exception for Name
        void NameCheck(string);
        //Count Number of Sets to Output upon Loss
        void CountSet(){
            ++Count;
        }
        int GetWallet(){
            return Wallet;
        }
        int GetHand(int n){
            return *(Hand+n);
        }
        int GetBet(){
            return Bet;
        }
        string GetName(){
            return *Name;
        }
        bool GetLeft(){
            return Left;
        }
        Steve& operator += (const Steve &);
        Steve operator + (const Steve &);
        Steve operator - (const Steve &);
};
//int Steve::Count=0;
#endif /* STEVE_H */