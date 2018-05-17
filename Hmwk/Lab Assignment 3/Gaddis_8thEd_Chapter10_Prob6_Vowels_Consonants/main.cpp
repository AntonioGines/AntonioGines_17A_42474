/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on March 31, 2018, 2:00 PM
 * Purpose:  Vowels and Consonants in a string
 */

//System Libraries Here
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int vowel(char*);
int consonants(char* );
void both(char*);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char array[80];
    char check;
    
    //Input or initialize values Here
    cout<<"Input a sentence with a max of 80 characters"<<endl;
    cin.getline(array, 80);
    
    
    //Process/Calculations Here
    do{
        cout<<"A) Count the number of vowels in the string"<<endl;
        cout<<"B) Count the number of consonants in the string"<<endl;
        cout<<"C) Count both the vowels and consonants in the string"<<endl;
        cout<<"D) Enter another string"<<endl;
        cout<<"E) Exit the program"<<endl;
        cin>>check;
        switch(check){
            case 'A':cout<<"There are "<<vowel(array)<<" vowels in the "
                <<"sentence."<<endl;
                break;
            case 'B':cout<<"There are "<<consonants(array)<<" consonants in "
                <<"the sentence"<<endl;
                break; 
            case 'C':both(array);
                break;
            case 'D':cin.ignore();
                cin.getline(array, 80);
                break;
            case 'E':break;
            default:cout<<"Invalid. Please Try Again."<<endl;
        }
    }while(check!='E');
    return 0;
}

void both(char* a){
    int count3=0;     //Consonants
    for(int i=0;i<=strlen(a)-1;i++){
        switch(*(a+i)){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':continue;
        }count3++;
    }
    int count4=0;           //Vowels
    for(int i=0;i<=strlen(a)-1;i++){
        switch(*(a+i)){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':count4++;
        }
    }cout<<"There are "<<count3<<" consonants and "<<count4<<" vowels in your"
         <<" sentence."<<endl;  
}

int consonants(char* b){
    int Tot=0;
    int count2=0; //consonants
    for(int i=0;i<=strlen(b)-1;i++){
        switch(*(b+i)){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':continue;
        }count2++;
    }
    return count2;
}

int vowel (char* array){
    int count1=0;
    for(int i=0;i<=strlen(array)-1;i++){
        switch(*(array+i)){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':count1++;
        }
    }
    return count1;
}