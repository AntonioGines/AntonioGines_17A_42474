/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on May 4, 2018, 9:42 AM
 * Purpose:  Converting Numbers to English
 */

#include <iostream>
using namespace std;

#ifndef NUMBER_H
#define NUMBER_H

void Number::SetNum(int n){
    Num=n;
}

int Number::GetNum() const{
    return Num;
}

void Number::Convert(int num){
    int n1000,n100,n10,n1;
    n1000=(num-num%1000)/1000;
    num%=1000;
    n100=(num-num%100)/100;
    num%=100;
    n10=(num-num%10)/10;
    num%=10;
    n1=num;
    
    
    switch(n1000){
        case 0:cout;break;
        case 1:cout<<"One Thousand ";break;
        case 2:cout<<"Two Thousand ";break;
        case 3:cout<<"Three Thousand ";break;
        case 4:cout<<"Four Thousand ";break;
        case 5:cout<<"Five Thousand ";break;
        case 6:cout<<"Six Thousand ";break;
        case 7:cout<<"Seven Thousand ";break;
        case 8:cout<<"Eight Thousand ";break;
        case 9:cout<<"Nine Thousand ";break;
    }
    
    switch(n100){
        case 0:cout;break;
        case 9:cout<<"Nine Hundred ";break;
        case 8:cout<<"Eight Hundred ";break;
        case 7:cout<<"Seven Hundred ";break;
        case 6:cout<<"Six Hundred ";break;
        case 5:cout<<"Five Hundred ";break;
        case 4:cout<<"Four Hundred ";break;
        case 3:cout<<"Three Hundred ";break;
        case 2:cout<<"Two Hundred ";break;
        case 1:cout<<"One Hundred ";break;
    }
    
    switch(n10){
        case 9:cout<<"Ninety ";break;
        case 8:cout<<"Eighty ";break;
        case 7:cout<<"Seventy ";break;
        case 6:cout<<"Sixty ";break;
        case 5:cout<<"Fifty ";break;
        case 4:cout<<"Forty ";break;
        case 3:cout<<"Thirty ";break;
        case 2:cout<<"Twenty ";break;
    }
    if(n10==1&&n1==9){
        cout<<"Nineteen ";
    }else if(n10==1&&n1==8){
        cout<<"Eighteen ";
    }else if(n10==1&&n1==7){
        cout<<"Seventeen ";
    }else if(n10==1&&n1==6){
        cout<<"Sixteen ";
    }else if(n10==1&&n1==5){
        cout<<"Fifteen ";
    }else if(n10==1&&n1==4){
        cout<<"Fourteen ";
    }else if(n10==1&&n1==3){
        cout<<"Thirteen ";
    }else if(n10==1&&n1==2){
        cout<<"Twelve ";
    }else if(n10==1&&n1==1){
        cout<<"Eleven ";
    }
    
    if(n10!=1){
        switch(n1){
            case 9:cout<<"Nine ";break;
            case 8:cout<<"Eight ";break;
            case 7:cout<<"Seven ";break;
            case 6:cout<<"Six ";break;
            case 5:cout<<"Five ";break;
            case 4:cout<<"Four ";break;
            case 3:cout<<"Three ";break;
            case 2:cout<<"Two ";break;
            case 1:cout<<"One ";break;
        }
    }
}



#endif /* NUMBER_H */

