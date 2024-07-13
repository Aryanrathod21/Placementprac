#include<iostream>
using namespace std;

int main(){

    int n = 50;

    for (int i = 1; i < n; i++)
    {
        if ( i % 2 != 0)
        {
            cout<<i;
            if ( i >= 1 && i<n-1)
            {
                cout<<",";
            }
        }
    }

    return 0;
}