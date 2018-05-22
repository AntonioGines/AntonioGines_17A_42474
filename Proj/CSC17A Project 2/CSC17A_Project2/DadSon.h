using namespace std;

#ifndef DADSON_H
#define DADSON_H

class Dad{
protected:
    static int Count;
    int Wallet=1000;
    int Hand[12];
    int Bet;
    bool Left;
public:
    //Default Constructor
    Dad(){}
    //Destructor
    void CreateHand();
    //Determine Bet
    int AmntBet();       
    //How Much Money is in the Wallet
    int NewTotal();
    //Determine Whether or Not Father or Son has Left the Table
    bool LeaveTbl();
    //In line Getter Functions
    int CountSet(){
        Count++;
    }
    int GetWallet(){
        return Wallet;
    }
    int GetHand(){
        return *Hand;
    }
    int GetBet(){
        return Bet;
    }
    bool GetLeft(){
        return Left;
    }
    //Overloaded Operators Functions
    Dad operator + (const Dad &);
    Dad operator - (const Dad &);
};

class Son : public Dad{
public:
    Son(int n){
        cout<<"The son's father gave him $250 and is showing him how to play "
            <<"Blackjack 21."<<endl;
        Wallet=n;
    }
    ~Son();
    int AmntBet();
};

#endif /* DADSON_H */

