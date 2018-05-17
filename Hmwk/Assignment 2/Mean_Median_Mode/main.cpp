/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on March 14, 2018 8:00 PM
 * Purpose:  Mean, Median, Mode
 */

//System Libraries Here
#include <iostream>//cout,cin
#include <cstring> //strlen()
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void sort(int[], int);
void mode(int[], int);
void mean(int[], int);
void median(int[], int);

int main(int argc, char**){
    //Initialize Variables
    int array[60];
    int n=0;
    
    //Map Process
    cout<<"Please enter the quantity of integers you want to input."<<endl;
    cin>>n;
    cout<<"Now please enter the integers."<<endl;
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    sort(array,n);
    
    return 0;
}


void median(int Array[], int num){
    if(num%2!= 0){
        int temp=((num+1)/2)-1;
        cout<<"The median is "<<Array[temp]<<endl;
    }else{
        cout<<"The median is "<<Array[(num/2)-1]<<" and "<<Array[num/2]<<endl;
    }
    mean(Array, num);
}


void mean(int Array[], int num){
    float total;
    for(int i=0;i<num;i++){
        total+= Array[i];
    }
    cout << "The mean is " << total/num << endl;
    mode(Array,num);
    }


void mode(int Array[], int num) {
    int* Rep = new int[num];
    for (int i=0;i<num;i++) {
        Rep[i]=0;
        int j=0;
        while((j<i)&&(Array[i]!=Array[j])) {
            if(Array[i]!=Array[j]) {
                j++;
            }
        }Rep[j]++;
    }int Max=0;
    for (int i=1;i<num;i++) {
        if (Rep[i]>Rep[Max]) {
            Max=i;
        }
    }
    cout<<"The mode is "<<Array[Max]<< endl;
}


void sort(int array[], int num){
    for(int i=0;i<num;i++){
        for(int h=0;h<num-1;h++){
            if(array[h]>array[h+1]){
                int temp=array[h+1];
                array[h+1]=array[h];
                array[h]=temp;
            }
        }
     }
    cout << "The Sorted Array is: "<<endl;;
    for(int i=0;i<num;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    median(array,num);
}