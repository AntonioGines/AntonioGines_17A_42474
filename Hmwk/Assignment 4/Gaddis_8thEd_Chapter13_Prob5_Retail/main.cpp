/* 
 * file:   main.cpp
 * Author: Antonio GInes
 * Created on April 4, 2018, 6:30 PM
 * Purpose:  Retail Information
 */

//System Libraries Here
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here
#include "Retail.h"

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

int main(int argc, char** argv) {
    //Declare Variables
    int number;
    float cost;
    string name;
    
    //Input
    cout<<"Please enter a retail item's description, the quantity of units "
        <<"on hand and the price per unit "<<endl;
    cout<<"Name:"<<endl;
    cin>>name;   
    cout<<"Quantity:"<<endl;
    cin>>number;
    cout<<"Price:"<<endl;
    cin>>cost;
    Retail Item1(name,number,cost);
    Item1.setName(name); 
    Item1.setNum(number); 
    Item1.setPrice(cost);
    Item1.setTotal(cost,number);
    
    cout<<"Please enter another retail item's description, the quantity of "
        <<"units on hand and the price per unit "<<endl;
    cout<<"Name:"<<endl;
    cin>>name;
    cout<<"Quantity:"<<endl;
    cin>>number;
    cout<<"Price:"<<endl;
    cin>>cost;
    Retail Item2(name,number,cost);
    Item2.setName(name); 
    Item2.setNum(number); 
    Item2.setPrice(cost); 
    Item2.setTotal(cost,number);
    
    cout<<"Please enter another retail item's description, the quantity of "
        <<"units on hand and the price per unit "<<endl;
    cout<<"Name:"<<endl;
    cin>>name;
    cout<<"Quantity:"<<endl;
    cin>>number;
    cout<<"Price:"<<endl;
    cin>>cost;
    Retail Item3(name,number,cost);
    Item3.setName(name); 
    Item3.setNum(number); 
    Item3.setPrice(cost); 
    Item3.setTotal(cost,number);
    
    cout<<setw(10)<<"Description"<<setw(15)<<"Units on Hand"<<setw(15)
        <<"Price Per Unit"<<setw(20)<<"Total Inventory Cost"<<endl;
    cout<<setw(11)<<Item1.getName()<<setw(15)<<Item1.getNum()<<setw(10)
        <<"$"<<fixed<<setprecision(2)<<Item1.getPrice()<<showpoint<<setw(15)
        <<"$"<<Item1.getTotal()<<endl;
    cout<<setw(11)<<Item2.getName()<<setw(15)<<Item2.getNum()<<setw(10)
        <<"$"<<fixed<<setprecision(2)<<Item2.getPrice()<<showpoint<<setw(15)
        <<"$"<<Item2.getTotal()<<endl;
    cout<<setw(11)<<Item3.getName()<<setw(15)<<Item3.getNum()<<setw(10)
        <<"$"<<fixed<<setprecision(2)<<Item3.getPrice()<<showpoint<<setw(15)
        <<"$"<<Item3.getTotal()<<endl;
    
    return 0;
}