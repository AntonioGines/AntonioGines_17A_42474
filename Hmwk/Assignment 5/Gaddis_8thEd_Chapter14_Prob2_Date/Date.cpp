/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on May 4, 2018, 10:31 AM
 * Purpose:  Determining the Year based on a Number
 */

#include <cstdlib>
#include <iostream>
using namespace std;

class Date{
    private:
        int Date;
    public:
        void SetDate(int);
        int GetDate() const;
        void Convert(int);
};
