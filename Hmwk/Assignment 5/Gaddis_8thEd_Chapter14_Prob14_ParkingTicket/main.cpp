/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on May 4, 2018, 10:31 AM
 * Purpose:  Determining the Year based on a Number
 */
#include <cstdlib>
using namespace std;

//User Libraries
#include "Number.h"
//#include "Date.cpp"
//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

int main(int argc, char** argv) {
    int date;
    bool check;
    ParkedCar Car;
    ParkingMeter Meter;
    ParkingTicket Ticket;
    PoliceOfficer Cop("N","N","N","N");
    
    cout<<"This program is designed to simulate an Officer checking cars at "
        <<"parking meters to see if tickets need to be distributed"<<endl;
    cout<<"The author comes upon a car and checks the meter."<<endl;
    check=Cop.Confirm(Car.GetTime(),Meter.GetTime());
    if(check==true){
        int CarTime=Car.GetTime();
        int MetTime=Meter.GetTime();
        cout<<"The Police Officer notes that the parked car had been there for "
            <<CarTime<<" minutes but the driver only paid for "
            <<MetTime<<" and started writing a ticket"<<endl;
        int cost=Cop.FineSrc(Car.GetTime(),Meter.GetTime());
        PoliceOfficer Cop(Car.GetMake(),Car.GetModel(),Car.GetColor(),
                Car.GetLiscence());
        Cop.SetFineTicket(cost);
        Cop.Print();
        cout<<"Officer Name: "<<Cop.GetPolName()<<endl;
        cout<<"Badge Number: "<<Cop.GetBadge()<<endl;
        
    }else{
        cout<<"No laws were broken and the police officer continued on his way."
            <<endl;
    }
    
    
    return 0;
}

void ParkingTicket::SetFine(int fin){
    Fine=fin;
}

void ParkingTicket::SetCar(string mak,string mod,string col,string lis){
    Make=mak;
    Model=mod;
    Color=col;
    Liscence=lis;
}
int PoliceOfficer::FineSrc(int spent,int bought){
    int temp,tot=25;
    temp=(spent-bought)-60; //Subtracting 60 because the first hour has already been included
    while(temp>0){
        tot+=10;
        temp-=60;
    }return tot;
}
bool PoliceOfficer::Confirm(int spent,int bought){
    if(spent>bought){
        return true;
    }else return false;
}