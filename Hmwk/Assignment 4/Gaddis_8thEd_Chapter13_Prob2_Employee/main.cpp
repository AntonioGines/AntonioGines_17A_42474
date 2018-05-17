/* 
 * file:   main.cpp
 * Author: Antonio GInes
 * Created on April 3, 2018, 10:10 AM
 * Purpose:  Getting the Date from a Class
 */

//System Libraries Here
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here
#include "EmpInfo.h"

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

string Month(int);

int main(int argc, char** argv) {
    //Declare Variables
    Info emp1;
    Info emp2;
    Info emp3;
    int id,count;
    string name,pos,dep;
    count=0;
    
    cout<<"Please enter the info of employee 1"<<endl;
    cout<<"Name"<<endl;
    cin>>name;
    emp1.setName(name);
    cout<<"Employee ID"<<endl;
    cin>>id;
    emp1.setIdNum(id);
    cout<<"Department"<<endl;
    cin>>dep;
    emp1.setDepart(dep);
    cout<<"Position"<<endl;
    cin>>pos;
    emp1.setPosition(pos);
    
    cout<<"Please enter the info of employee 2"<<endl;
    cout<<"Name"<<endl;
    cin>>name;
    emp2.setName(name);
    cout<<"Employee ID"<<endl;
    cin>>id;
    emp2.setIdNum(id);
    cout<<"Department"<<endl;
    cin>>dep;
    emp2.setDepart(dep);
    cout<<"Position"<<endl;
    cin>>pos;
    emp2.setPosition(pos);
    
    cout<<"Please enter the info of employee 3"<<endl;
    cout<<"Name"<<endl;
    cin>>name;
    emp3.setName(name);
    cout<<"Employee ID"<<endl;
    cin>>id;
    emp3.setIdNum(id);
    cout<<"Department"<<endl;
    cin>>dep;
    emp3.setDepart(dep);
    cout<<"Position"<<endl;
    cin>>pos;
    emp3.setPosition(pos);
    
    cout<<"Name"<<setw(15)<<"ID Number"<<setw(15)
        <<"Department"<<setw(15)<<"Position"<<endl;
    
    cout<<emp1.getName()<<setw(10)<<emp1.getIdNum()<<setw(10)
        <<emp1.getDepart()<<setw(10)<<emp1.getPostion()<<endl;
   
    cout<<emp2.getName()<<setw(10)<<emp2.getIdNum()<<setw(10)
        <<emp2.getDepart()<<setw(10)<<emp2.getPostion()<<endl;
    
    cout<<emp3.getName()<<setw(10)<<emp3.getIdNum()<<setw(10)
        <<emp3.getDepart()<<setw(10)<<emp3.getPostion()<<endl;
    
    return 0;
}