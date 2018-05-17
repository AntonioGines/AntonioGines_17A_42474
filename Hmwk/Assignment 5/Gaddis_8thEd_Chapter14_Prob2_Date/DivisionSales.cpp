/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on May 4, 2018, 10:31 AM
 * Purpose:  Determining the Year based on a Number
 */

#include <cstdlib>
#include <iostream>
using namespace std;


class DivSales{
    private:
        int Sales[4];
        static int Total;
    public:
        DivSales year(int Q1=0,int Q2=0,int Q3=0,int Q4=0){
            Sales[0]=Q1;
            Sales[1]=Q2;
            Sales[2]=Q3;
            Sales[3]=Q4;
        }
        void SetDate(int);
        int GetDate() const;
        void SetTotal();
        int GetTotal() const;
};
