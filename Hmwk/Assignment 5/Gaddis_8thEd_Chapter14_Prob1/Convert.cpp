/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on May 4, 2018, 9:42 AM
 * Purpose:  Converting Number to English
 */
#include <cstdlib>
#include <iostream>
using namespace std;

class Number{
    private:
        int Num;
    public:
        void SetNum(int);
        int GetNum() const;
        void Convert(int);
        
};
