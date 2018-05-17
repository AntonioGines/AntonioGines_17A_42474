/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on May 4, 2018, 10:31 AM
 * Purpose:  Determining the Year based on a Number
 */

#include <iostream>
using namespace std;

#ifndef DATE_H
#define DATE_H

class ParkedCar{
    private:
        string Make="Mercedes Benz";
        string Model="C350";
        string Color="Black";
        string Liscence="L309R42";
        int Time=135;
    public:
        string GetMake(){
            return Make;
        }
        string GetModel(){
            return Model;
        }
        string GetColor(){
            return Color;
        }
        string GetLiscence(){
            return Liscence;
        }
        int GetTime(){
            return Time;
        }
};

class ParkingMeter{
    private:
        int Time=60;
    public:
        GetTime(){
            return Time;
        }
};

class ParkingTicket{
    private:
        string Make;
        string Model;
        string Color;
        string Liscence;
        int Fine;
    public:
        void SetCar(string,string,string,string);
        void SetFine(int);
        string GetMake(){
            return Make;
        }
        string GetModel(){
            return Model;
        }
        string GetColor(){
            return Color;
        }
        string GetLiscence(){
            return Liscence;
        }
        int GetFine(){
            return Fine;
        }
};
class PoliceOfficer{
    private:
        string PolName="Max Ericson";
        string Badge="104";
        ParkingTicket Dist;
    public:
        PoliceOfficer(string make,string model,string color,string liscence){
            Dist.SetCar(make,model,color,liscence);
        }
        int SetFineTicket(int fine){
            Dist.SetFine(fine);
        }
        string GetPolName(){
            return PolName;
        }
        string GetBadge(){
            return Badge;
        }
        bool Confirm(int,int);
        int FineSrc(int,int);
        void Print() {
        cout<<"The Ticket looks as such:"<<endl;
            cout<<"Make: "<<Dist.GetMake()<<endl;
            cout<<"Model: "<<Dist.GetModel()<<endl;
            cout<<"Color: "<<Dist.GetColor()<<endl;
            cout<<"Liscence: "<<Dist.GetLiscence()<<endl;
            cout<<"Fine: $"<<Dist.GetFine()<<endl;
        }
};

#endif /* DATE_H */

