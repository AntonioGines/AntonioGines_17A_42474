/* 
 * file:   Date.cpp
 * Author: Antonio GInes
 * Created on April 3, 2018, 12:45 PM
 * Purpose:  Getting the Date from a Class
 */
#include <string>
#include <iostream>
using namespace std;

#include "Info.h"

Info::Info(string nme, string add, int ag, int num){
    Name=nme;
    Address=add;
    Num=num;
    Age=ag;
}