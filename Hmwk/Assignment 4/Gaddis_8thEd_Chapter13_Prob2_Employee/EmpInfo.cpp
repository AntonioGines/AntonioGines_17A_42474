/* 
 * file:   Date.cpp
 * Author: Antonio GInes
 * Created on April 3, 2018, 12:45 PM
 * Purpose:  Getting the Date from a Class
 */
#include <string>
using namespace std;

#include "EmpInfo.h"

Info::Info(int mm, string dd, string yy, string pos){
    IdNum=mm;
    Name=dd;
    Depart=yy;
    Postion=pos;
}
Info::Info(){
    
}