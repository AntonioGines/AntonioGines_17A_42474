/* 
 * file:   Date.cpp
 * Author: Antonio GInes
 * Created on April 3, 2018, 12:45 PM
 * Purpose:  Getting the Date from a Class
 */
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

#include "Retail.h"

Retail::Retail (string nme,int num,float price){
    Name=nme;
    Num=num;
    Price=price;
}