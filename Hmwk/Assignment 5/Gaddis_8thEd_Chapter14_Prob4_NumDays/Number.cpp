/* 
 * file:   main.cpp
 * Author: Antonio Gines
 * Created on May 4, 2018, 11:19 AM
 * Purpose:  Number of Days
 */
using namespace std;

class Days{
    private:
        float Hours;
        float Day;
    public:
        //Constructor
        Days (float Da=0, float H=0){
            Day=Da;
            Hours=H;
        }
        //Mutators
        void SetHours(float);
        void SetDays(float);
        //Accessors
        float GetHours() const;
        float GetDays() const;
        
        //Overloaded Operator Functions
        Days operator ++ ();
        Days operator ++ (int);
        Days operator -- ();
        Days operator -- (int);
};