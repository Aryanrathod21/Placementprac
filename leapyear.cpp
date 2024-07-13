#include<iostream>
using namespace std;

bool isLeapYear(int year){
    if ( year % 4 == 0)
    {
        if ( year % 100 == 0)
        {
            if ( year % 400 == 0)
            {
                return true;
            }else
            {
                return false;
            }
            
            
        }else
        {
            return true;
        }
        
        
    }else
    {
        return false;
    }
    
    


};

int main(){

    int year;
    cout<<"enter a year : ";
    cin>>year;

    if (isLeapYear (year))
    {
        cout<<year<<"is a leap year";
    }else
    {
        cout<<year<<"is not a leap year";
    }
    
    

    return 0;
}