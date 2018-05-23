/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on May, 6 , 2018, 12:37 PM
 * Purpose:  Blackjack 21
 */

//System Libraries
#include <iostream>                          //Used for Input/Output
#include <iomanip>                           //Used to format Output
#include <cstdlib>                           //Used for random generator
#include <ctime>                             //Used to seed random generator
#include <cmath>                             //Used to calculate largest card
#include <cstring>                           //Used to make StrCmp
#include <memory>                            //Used for Dynamic Memory
#include <string>                            //Used to input names
#include <fstream>                           //Used to read from file
#include <vector>                            //Used to contain names

using namespace std;

//User Libraries
#include "Cards.h"
#include "Steve.h"
#include "DadSon.h"
//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
int NumCards=12;

//Function Prototypes
bool Read(fstream &, fstream &);        //Input and Output Data via Binary Files
Cards *DealHnd(int,int);                //Allocate Memory and Create Cards
void Destroy(Cards *);                  //Delete Arrays in Memory
int ace();                              //Choose Whether an Ace=1 or 11
int Dealt(int ,int );                   //Player's Total Cards Dealt
void Names(char [],char []);            //Player's and Dealer's Name
bool AutoWin(int, int);                 //Determine if Automatic Win  by 21
void AiOutcome(Steve [],int,int[][12],int);
void AiPot(Steve [],Steve,int);
void DadSonMoney(Dad,Son);

template<class T>
T Incrmnt(T number){
    return number+number;
}

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    
    int SIZE=10;      
    int Ppl=2,m=0,AiTotal,AiCount;
    int newbet,total,rng1,rng2,card1,card2,card3,card4,payout,ptntial;
    int total1,total2,split1,split2,dealtot,numplay;
    char choice, hitagn, playagn,rule;
    float bet;
    bool win;
    char you[20],deal[20];
    string please=" Please enter a bet ";please+="between $15 and $500";    
    
    fstream file;
    fstream copy;
    Dad dad;
        cout<<"A Father and his son have come to the casino for the son's 18th "
        <<"birthday, the father has brought $1000 to use at the tables."
        <<endl;
    Son son(250);
    Steve money(0);
    
    
    //Seed Random Number Generator
    srand(static_cast<int>(time(0)));

    //Initialize Variables    
    ptntial=0;                                  //Will be used later on as temp

    //Rules of the Game
    cout<<"Would you like to read the rules of the game? If so, type Y"<<endl;
    cin>>rule;
    if (rule=='Y'){
        Read(file, copy);
    }
    //Invite Other Players
    cout<<"How many other people would you like to join you at the table? "
        <<"Please pick a number between 1 and 3."<<endl;
    cin>>numplay;
    Steve obj[numplay](1000);
    for(int m=0;m<=numplay-1;m++){
        obj[m].SetName(m);
    }
    //Create Hand to Duplicate to
    int ClsHand[numplay][12];
    //Create Names
    cout<<"Before we begin, what is your name and what is the "
        <<"dealer's name?"<<endl;
    Names(you, deal);                           //Call FillAry
    do{ 
        //Create Instance of Father and Son Class
        dad.CreateHand();
        son.CreateHand();
        //Create Hand for Other Players
        for(int i=0;i<=numplay-1;i++){
            obj[i].CreateHand();
        }
        //Copy Hand to 2-D Array
        for(int m=0;m<=numplay-1;m++){
            for(int crd=0;crd<=10;crd++){
                ClsHand[m][crd]=obj[m].GetHand(crd);
                //cout<<ClsHand[m][crd]<<endl;
            }
        }
        //Create Bets for Father and Son
        dad.AmntBet();
        son.AmntBet();
        //Create Bets for AI Players
        for(int t=0;t<=numplay-1;t++){
            obj[t].AmntBet();
        }
        //Create Cards for Player and Dealer
        Cards *card;
        card=DealHnd(Ppl,SIZE);
        int count1=0;
        newbet=0;
        bet=0;
        while(card[0].hand[0]==11&&card[0].hand[0]==card[0].hand[1]){       
            card[0].hand[1]=(rand()%11)+1;
        }
        do{                                          //Enter Player name
            cout<<"Mr./Mrs. "<<you<<please<<endl;
            cin>>bet;
        }while(bet>500||bet<15);
        card1=card[0].hand[0];
        card2=card[0].hand[1];
        cout<<"Your first two cards are:"<<endl;
        cout<<card1<<" and "<<card2<<endl;    //Deal The Cards
        if(card1==1||card1==11){              //Choosing what happens if you get  
            card1=ace();                      //1 or an 11
        }if(card2==1||card2==11){
            card2=ace();
        }
        cout<<"Your hand is now "<<to_string(card1)<<" and "<<to_string(card2)
            <<endl;
        total=Dealt(card1,card2);
        //Record Largest Card's Value
        if(card[0].hand[0]>card[0].hand[1]){
            rng1=card1;
        }else rng1=card2;
        //Determine Auto Win
        win=AutoWin(card1, card2);
        win?cout<<"Congratulations! It's a Blackjack,you win"<<endl:cout<<endl;
        if(win){                              //If it is 21
            cout<<"Your payout is:"<<endl;
            cout<<"$"<<fixed<<setprecision(2)<<showpoint
                <<bet<<endl;
        }
        else cout<<endl;
        if(win){
            exit(0);
        }
        cout<<"The dealer drew:"<<endl;        //Dealer's Turn
        cout<<card[1].hand[0]<<endl;
        if(card1==card2){                   //Choices when you are able to split
            cout<<"If you wish to Hit type H"<<endl;
            cout<<"If you wish to Stand type S"<<endl;
            cout<<"If you wish to Split type T"<<endl;
            cout<<"If you wish to Double type D"<<endl;
        }if(card1!=card2){               //Choices when  you are unable to split
            cout<<"If you wish to Hit type H"<<endl;
            cout<<"If you wish to Stand type S"<<endl;
            cout<<"If you wish to Double type D"<<endl;
        }
        cin>>choice;                                  //Validating user input
        while(choice!='H'&&choice!='S'&&choice!='T'&&choice!='D'){
            cout<<"You have entered an invalid choice please try again"<<endl;
            cin>>choice;
        }
        if(choice=='T'&&card1!=card2){ //Inability to split when cards don't =
            while(choice=='T')
            cout<<"You cannot split because your cards are not the same. Please"
                <<" enter a valid response"<<endl;
            cin>>choice;
        }
        switch(choice){                       //Begin switch based on input
            case 'H':do{                      //Choosing to hit
                        card3=card[0].hand[count1+2];
                        count1++;
                        cout<<"You have chosen to hit and your card is:"<<endl;
                        cout<<card3<<endl;
                        if(card3==1||card3==11){  //Choosing what happens 
                            card3=ace();          //if you get 1 or an 11
                        }
                        total+=card3;           //Incrementing total value of cards
                        if(card3>card2){
                            rng2=card3;
                        }
                        else if(ptntial>card3&&ptntial>card2){
                            rng2=ptntial;
                        }
                        else rng2=card1;
                        ptntial=card3;
                        cout<<"Bringing your total to:"<<endl;
                        cout<<total<<endl;
                        if(total<=21){         //Choosing to hit again
                        cout<<"Would you like to hit again? If yes type"
                               <<" H and if not type any other character"<<endl; 
                        cin>>hitagn;
                        }
                        else cout<<"You cannot hit again"<<endl;
                    }while(hitagn=='H'&&total<=21);
                    cout<<endl;break;

            case 'S':cout<<endl;break;          //Choosing to stay

            case 'D':bet=Incrmnt(bet);     //Choosing to double and incrementing bet
                     card3=card[0].hand[2];
                     cout<<"You have doubled your initial bet to "
                         <<"$"<<bet<<endl;
                     cout<<"You will be given another card and cannot hit again"
                         <<endl;
                     cout<<"Your card is"<<endl;
                     cout<<card3<<endl;
                     if(card3==1||card3==11){ //Choosing what happens if you get  
                            card3=ace();          //1 or an 11
                     }
                     cout<<"And your total is"<<endl;
                     total+=card3;           //Incrementing total value of cards
                     if(card3>card2){      //Saving input to determine max value 
                            rng2=card3;      //of single card in a hand
                     }
                     else rng2=card1;
                     bet;
                     cout<<total<<endl;break;
            case 'T':split1=card1;            //Splitting the hand
                     split2=card2;
                     cout<<"You have doubled your initial bet and split it into"
                         <<"two hands. "<<endl;
                     bet=Incrmnt(bet);                 //Incrementing the bet
                     bet;
                     card3=card[0].hand[2];
                     card4=card[0].hand[3];
                     cout<<"The dealer will now add a card to both hands."
                         <<endl;
                     cout<<"To the first hand the dealer added"<<endl;
                     cout<<card3<<endl;         //Card added to the first hand
                     if(card3==1||card3==11){ //Choosing what happens if you get  
                            card3=ace();          //1 or an 11
                     }
                     if(card3>card2){           //Saving input
                         if(card3>card4){
                             rng2=card3;
                         }
                     }
                     else rng2=card1;
                     cout<<"To the second hand the dealer added"<<endl;
                     cout<<card4<<endl;          //card added to second hand
                     if(card4==1||card4==11){    //Choosing what happens  
                            card4=ace();          //if you get 1 or an 11
                     }
                     if(card4>card2){
                         if(card4>card3){        //Saving input
                             rng2=card4;
                         }
                     }
                     else rng2=card1;
                     total1=card1+card3;          //Total value of each hand
                     total2=card2+card4;
                     cout<<"The total of the first pile is"<<endl;
                     cout<<total1<<endl;
                     cout<<"The total of the second pile is"<<endl;
                     cout<<total2<<endl;
                     if(total1>total2){             //Determine which hand is
                         total=total1;              //Favorable
                     }else total=total2;
                     cout<<endl;break;
        }if(total>21){                              //It's a bust if > 21
            cout<<"Sorry, your total of "<<total<<" is greater than 21. It's a "
                <<"bust, thanks for your cash!"<<endl;
        }
        else{
            dealtot=card[1].hand[0]+card[1].hand[1];   //If it's not an immediate bust
            cout<<"The dealer will now reveal their second card and choose "
                 <<"whether or not to hit"<<endl;
            cout<<"The dealer's second card is:"<<endl;
            cout<<card[1].hand[1]<<endl;
            int count=0;
            while(dealtot<=total){      //Determine whether dealer hits
                dealtot+=card[1].hand[count+2];
                cout<<"The dealer chose to hit and the card drawn was:"<<endl;
                cout<<card[1].hand[count+2]<<endl;
                count++;
            }
            if (count<=1){
                count=1;
            }
            cout<<"The dealer's total is:"<<endl;
            cout<<dealtot<<endl;
            if(dealtot>21){                        // If Dealer Busts
                cout<<"Congratulations! "<<deal
                <<" the dealer busts meaning you won!"<<endl;
                cout<<"Your payout is $"<<bet<<endl;
            }
            else if(total<=21&&total>dealtot){      //If you win
                cout<<"Congratulations! You beat "<<deal<<" the dealer! "
                    <<endl;
                cout<<"Your payout is $"<<bet<<endl;
            }
            else if(dealtot>total){                 //If the dealer busts
                cout<<"Sorry, but "<<deal
                    <<" the dealer beat you and you lost $"<<bet<<endl;
            }
            else if(dealtot==total){                //If you tie
                cout<<"You and the dealer tied so you get to keep your $"<<bet
                    <<endl;
            }
            AiOutcome(obj, numplay, ClsHand, dealtot);
            AiPot(obj,money,numplay);
        }
        
        cout<<"If you would like to play again type A and if not type in"
             <<" any other character."<<endl;
        cin>>playagn;                                //Would you like to replay?
        Destroy(card);
    }
    while(playagn=='A'||playagn=='a');              //Choose to replay
    for(int n=0;n<=numplay-1;n++){
        obj[n].DestrName();
    }
    //Exit stage right!
    return 0;
}

void AiPot(Steve obj[],Steve mon,int num){
    for(int h=0;h<=num-1;h++){
        mon+=obj[h];
    }
        cout<<mon.GetWallet()<<endl;
}

void AiOutcome(Steve obj[],int num,int hand[][12],int deal){
    int AiTotal=0;
    int AiCount=0;
    int m=0;
    int hold=0;
    for(int play=0;play<=num-1;play++){
        //Calculate if they Haven't Left the Table
        if(obj[play].GetLeft()==false){
            //cout<<deal<<endl;
            AiTotal=0;
            AiCount=0;
            //Pull Form Hand
            while(AiTotal<15){
                AiTotal+=hand[play][AiCount];
                AiCount++;
            }
            cout<<"Hand is "<<AiTotal<<endl;
            //If the AI Won
            if(AiTotal>deal){
                cout<<obj[play].GetName()<<" beat the dealer and won "
                    <<obj[play].GetBet()<<endl;
                hold=obj[play].GetBet();
                //cout<<hold<<endl;
                obj[play].NewWallet(hold);
                //cout<<obj[play].NewWallet(obj[play].GetBet())<<endl;
            }
            //If the AI Lost
            if(AiTotal<deal||AiTotal>21){
                cout<<obj[play].GetName()<<" was beaten by the house and lost $"
                    <<obj[play].GetBet()<<endl;
                m=0-obj[play].GetBet();
                obj[play].NewWallet(m);
            }
            //If the AI and the Dealer tied
            if(AiTotal==deal&&AiTotal<=21){
                cout<<obj[play].GetName()<<" tied with the dealer and kept "
                    <<"their bet of $"<<obj[play].GetBet()<<endl;
            }
        }
    }
}

bool AutoWin(int num1, int num2){                    //If first hand is 21
    bool Val;
    if(num1+num2==21){
        Val=true;
    }else Val=false;
    return Val;
}

void Names(char you[] ,char deal[]){          //Input Names
    cout<<"Please enter your name"<<endl;
        cin>>you;
        if(islower(you[0])){
            you[0]=toupper(you[0]);
        }cout<<"Please enter the dealer's name"<<endl;
        cin>>deal;
        if(islower(deal[0])){
            deal[0]=toupper(deal[0]);
        }if(!strcmp(you,deal)){
            cout<<"How coincidental, you and the dealer have the same name!"
                <<" Maybe it's good luck!"<<endl;
        }
    }

int Dealt(int card1,int card2){                  //Display Total
    int T;
    T=card1+card2;
    cout<<"Your total is "<<T<<endl;
    return T;
}

int ace(){                                           //Determine if it is an Ace
    int n;
    cout<<"You have an ace! Would you like the card to be a 1 or an 11?"<<endl;
    cin>>n;
    while(n!=1&&n!=11){
        cout<<"You have not entered a valid number, please try again"<<endl;
        cin>>n;
    }
    return n;
}

//Allocate Memory for Hand of Cards
Cards *DealHnd(int Ppl, int SIZE){
    Cards *card=new Cards[Ppl];
    
    for(int j=0;j<=Ppl-1;j++){
        card[j].person=Ppl;
        card[j].num=SIZE;
        card[j].hand=new int[card[j].num];
        int i=0;
        for(i=0;i<=card[j].num-1;i++){
           card[j].hand[i]=rand()%10+1;//[1-11]
        }        
    }
    return card;
}

//Destroy The Hand of Cards
void Destroy(Cards *c){
    delete[]c[0].hand;
    delete[]c[1].hand;
    delete[](c+0);
    delete[](c+1);
}

bool Read(fstream &file, fstream &copy){
    char ch[1500];
    //Open Text File
    copy.open("Temp.bin", ios::out|ios::in | ios::binary);
    file.open("Blackjack.txt",ios::in | ios::binary);
    
    int i=0;
    //Make Sure The File Exists
    if(!file) return false;  
    //Begin Copying To A String
    else {
       while(file){
        file.get(ch[i]);
        copy.put(ch[i]);
        i++; 
        }
    }
    //Close Files
    file.close();
    copy.close();
    //Re-Open as Binary File
    copy.open("Temp.bin", ios::in| ios::binary);
    i=0;
    if(!copy)return false;
    //Copy Directly To Binary File
    else{
        while(copy){
            copy.read(&ch[i],sizeof(ch[i]));
            cout<<ch[i];
            i++;
        }cout<<endl;
        cout<<endl;
        copy.close();//Close the file
    }
    return true;
}