#include<iostream>
using namespace std;

int main(){
    // int rows,cols;
    // cin>>rows>>cols;

//simple ractangle
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int  j= 1; j <= cols; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
        
    // }

//hollow ractangle
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int  j= 1; j <= cols; j++)
    //     {
    //         if(i==1 || i==rows || j==1 || j==cols  )
    //         {
    //             cout<<"*";
    //         }
    //         else
    //         {
    //             cout<<" ";
    //         }
            
    //     }
    //     cout<<endl;
        
    // }

     int n;
     cin>>n;

//reverse pyramid

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }  

//pyramid with numbers  

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // } 

//butterfly pattern

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for (int j = 1; j <= space ; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    } 

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for (int j = 1; j <= space ; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    } 

    return 0;
}