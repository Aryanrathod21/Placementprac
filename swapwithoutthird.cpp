#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;

    cout<<"Before swaping value of a is : "<<a<<endl;
    cout<<"Before swaping value of b is : "<<b<<endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"After swaping value of a is : "<<a<<endl;
    cout<<"After swaping value of b is : "<<b<<endl;


    return 0;
}