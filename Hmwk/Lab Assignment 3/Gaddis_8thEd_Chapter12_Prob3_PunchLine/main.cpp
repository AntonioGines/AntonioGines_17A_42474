/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on March 31, 2018, 3:04 PM
 * Purpose:  Display a Joke and a Punchline
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
void Joke(fstream& );
void getPunch(fstream& );

int main(int argc, char** argv) {
    fstream text,punch;
    int counter=1;
    char line[80],joke[20];
    
    text.open("Joke.txt", ios::in);
    
    if(!text||!punch){
        cout<<"Error"<<endl;
    }
    Joke(text);
    
    punch.open("Punchline.txt", ios::in);
    getPunch(punch);
    
    text.close();
    punch.close();
    
    return 0;
}

void Joke (fstream& str){
    string line;
    getline(str, line);
        cout<<line<<endl;
}

void getPunch(fstream& input){
    string line;
    int stop=0;
    getline(input, line);
    
    while(input){
        stop=line.length();
        getline(input, line);
    }
    input.seekg(stop,ios::end);
    getline(input, line);
    cout<<line<<endl;
}
