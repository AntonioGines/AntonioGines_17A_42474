/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on March 31, 2018, 4:10 PM
 * Purpose:  Include Numbers Before Each Line of Text
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

int main(int argc, char** argv) {
    fstream text;
    int counter=1;
    char line[80];
    string filenme;
    
    cout<<"Please enter the name of the file that is located within the project"
        <<" folder including the .txt extenison"<<endl;
    getline(cin, filenme);
    
    text.open(filenme, ios::in);
    if(!text){
        cout<<"Error"<<endl;
    }else{   
        while(!text.eof()&&counter<=10){
            text.getline(line, 81, '\n');
            cout<<counter<<":"<<line<<endl;
            counter++;
        }
        if (counter<10){
            cout<<"Entire File Has Been Displayed"<<endl;
        }
    }
    
    return 0;
}

