#include<iostream>
using namespace std;

int main(){
    int i,orignum,revnum=0;
    cout<<"enter the number"<<" ";
    cin>>i;

    orignum = i;

    while (i>0)
    {
        revnum = (revnum*10)+i%10;
        i=i/10;
    }
    
    
    if (revnum == orignum)
    {
        cout<<"the number is palindrone number";
    }
    else
    {
        cout<<"the number is not palindrone number";
    }
    
    


    return 0;
}