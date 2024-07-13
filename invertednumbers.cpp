#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter rows : ";
    cin>>n;
    int count = n*(n+1)/2;
    
    for (int i = n ; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<count<<" ";
            count--;
        }
        cout<<endl;
        
    }
    

    return 0;
}