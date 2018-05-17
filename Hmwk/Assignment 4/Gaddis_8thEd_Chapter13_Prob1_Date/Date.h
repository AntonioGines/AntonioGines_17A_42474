/* 
 * file:   Date.h
 * Author: Antonio GInes
 * Created on April 3, 2018, 7:30 AM
 * Purpose:  Getting the Date from a Class
 */

#ifndef DATE_H
#define DATE_H

class Date{
    private:
        int month;
        int day;
        int year;
    public:
        Date(int mm, int dd, int yy);
        int getMonth(){return month;}
        int getDay(){return day;}
        int getYear(){return year;}
};


#endif /* DATE_H */

