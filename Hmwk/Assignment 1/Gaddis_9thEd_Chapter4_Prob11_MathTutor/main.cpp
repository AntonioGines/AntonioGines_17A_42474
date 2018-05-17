/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 16, 201, 11::30 AM
 * Purpose:  Math Tutor
 */

//System Libraries Here
#include <iostream>//I/O Library
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    unsigned short op1, op2, result, answer;
    
    //Input or initialize values Here
    op1=rand()%900+100;//Three Digit Number
    op2=rand()%1000;   //Any 1 to 3 Digit number
    
    //Process/Calculations Here
    result=op1+op2;
    
    //Output Located Here
    cout<<"Test your addition skills, solve the following"<<endl;
    cout<<setw(5)<<op1<<endl;
    cout<<"+ "<<setw(3)<<op2<<endl;
    cout<<"-----"<<endl<<(result>1000?" ":"  ");
    cin>>answer;
    cout<<(result==answer?"Correct":"Incorrect")<<endl;
    //Exit
    return 0;
}

