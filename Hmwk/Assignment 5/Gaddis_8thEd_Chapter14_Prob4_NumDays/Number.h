/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on May 4, 2018, 11:19 AM
 * Purpose:  Number of Days
 */
using namespace std;

#ifndef NUMBER_H
#define NUMBER_H

void Days::SetDays(float d){
    Day=(d/8);
}
void Days::SetHours(float h){
    Hours=h;
}
float Days::GetDays() const{
    return Day;
}
float Days::GetHours() const{
    return Hours;
}
Days Days::operator ++(){
    ++Hours;
        //cout<<"Pre Inc"<<Hours<<endl;
    return *this;
}
Days Days::operator --(){
    --Hours;
        //cout<<"Pre Dec"<<Hours<<endl;
    return *this;
}
Days Days::operator ++(int){
    Days temp(Day,Hours);
    Hours++;
        //cout<<"Post Inc"<<Hours<<endl;
    return temp;
}
Days Days::operator --(int){
    Days temp(Day,Hours);
    Hours--;
    //cout<<"Post Dec"<<Hours<<endl;
    return temp;
}

#endif /* NUMBER_H */

