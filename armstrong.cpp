#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int sum = 0;
    int orig = n;

    while (n>0)
    {
        int lastDigit = n%10;
        sum = sum + pow(lastDigit,3);
        n=n/10;
    }
    
    if (sum == orig)
    {
        cout<<"the number is armstrong";
    }
    else
    {
        cout<<"the number is not armstrong";
    }
    
    
    


    return 0;
}