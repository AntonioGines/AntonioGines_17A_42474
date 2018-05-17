/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on May 4, 2018, 10:31 AM
 * Purpose:  Determining the Year based on a Number
 */

#ifndef AGAIN_H
#define AGAIN_H

class DivSales{
    private:
        int Sales[4];
        int Total=0;
    public:
        DivSales (int Q1=0,int Q2=0,int Q3=0,int Q4=0){
            Sales[0]=Q1;
            Sales[1]=Q2;
            Sales[2]=Q3;
            Sales[3]=Q4;
        }
        void SetSales1(int);
        void SetSales2(int);
        void SetSales3(int);
        void SetSales4(int);
        void SetTotal();
        int GetTotal() const;
        
};

#endif /* AGAIN_H */

