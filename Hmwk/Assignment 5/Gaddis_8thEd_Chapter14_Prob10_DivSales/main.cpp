/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on May 4, 2018, 10:31 AM
 * Purpose:  Determining the Year based on a Number
 */
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries
#include "Again.h"
//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int main(int argc, char** argv) {
    int temp1,temp2,temp3,temp4;
    DivSales sale[6];
    cout<<"This program is designed to take in quarterly sales over six years "
        <<"and out put the total sales from each year"<<endl;
    for(int i=0;i<=5;i++){
        cout<<"Please enter the sales for quarter 1 of year "<<i+1<<endl;
        cin>>temp1;
        cout<<"Please enter the sales for quarter 2 of year "<<i+1<<endl;
        cin>>temp2;
        cout<<"Please enter the sales for quarter 3 of year "<<i+1<<endl;
        cin>>temp3;
        cout<<"Please enter the sales for quarter 4 of year "<<i+1<<endl;
        cin>>temp4;
        sale[i].SetSales1(temp1);
        sale[i].SetSales2(temp2);
        sale[i].SetSales3(temp3);
        sale[i].SetSales4(temp4);
        sale[i].SetTotal();
    }
    for(int m=0;m<=5;m++){
        cout<<"The total for year "<<m+1<<" is $"<<sale[m].GetTotal()<<endl;
    }
    
    
    
    return 0;
}

void DivSales::SetSales1(int m){
    Sales[0]=m;
}

void DivSales::SetSales2(int h){
    Sales[1]=h;
}

void DivSales::SetSales3(int l){
    Sales[2]=l;
}

void DivSales::SetSales4(int b){
    Sales[3]=b;
}

void DivSales::SetTotal(){
    for(int k=0;k<=3;k++){
        Total+=Sales[k];
    }
}

int DivSales::GetTotal() const{
    return Total;
}
