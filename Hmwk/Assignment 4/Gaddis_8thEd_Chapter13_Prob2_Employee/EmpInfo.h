/* 
 * file:   EmpInfo.h
 * Author: Antonio GInes
 * Created on April 3, 2018, 12:45 PM
 * Purpose:  Getting the Date from a Class
 */

#include <string>
using namespace std;

#ifndef DATE_H
#define DATE_H

class Info{
    private:
        int IdNum;
        string Name;
        string Depart;
        string Postion;
    public:
        Info(int mm, string nme, string dep, string pos);
        Info();
        int getIdNum(){return IdNum;}
        string getName(){return Name;}
        string getDepart(){return Depart;}
        string getPostion(){return Postion;}
        void setIdNum( int mm ) { IdNum = mm; }
        void setName( string nme ) { Name = nme; }
        void setDepart( string dep ) { Depart = dep; }
        void setPosition( string pos ) { Postion = pos; }
};


#endif /* DATE_H */

