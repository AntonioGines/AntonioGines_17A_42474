/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on March 31, 2018, 2:36 PM
 * Purpose:  Call For a File
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
    char confirm,line[80];
    string file;
    
    cout<<"Please enter the name of the file within this program's folder "
        <<"including the '.txt' attachment to display its contents"<<endl;
    cin>>file;
    
    text.open(file, ios::in);
    if(!text){
        cout<<"Error"<<endl;
    }else{   
        while(!text.eof()){
            text.getline(line, 81, '\n');
            cout<<line<<endl;
            counter++;
            if (counter%24==0){
                cout<<"Please hit a key to continue"<<endl;
                cin>>confirm;
            }
        }
    }
    
    return 0;
}

