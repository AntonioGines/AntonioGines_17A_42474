using namespace std;

#ifndef DADSON_H
#define DADSON_H

class Dad{
private:
    static int Count;
    int Wallet=1000;
    int Hand[12];
    int Bet;
public:
    Dad(){}
        void CreateHand();
        int AmntBet(int);
        int NewTotal();
        bool LeaveTbl(int GetWallet);
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

class Son : protected Dad{
private:
    static int Count;
    int Wallet;
    int Hand[12];
    int Bet;
public:
    Son(int n){
        cout<<"The son's father gave him $250 and is showing him how to play "
            <<"Blackjack 21."<<endl;
        Wallet=n;
    }
};


#endif /* DADSON_H */

