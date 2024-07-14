#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter rows : ";
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    { int counter = 1;
        for (int j = 1; j <= n ; j++)
        {
            if ( j % 2 == 0 )
            {
                cout<<i;
            }
            
            else
            {
                
                cout<<counter;
                counter++;
            }
            
            
        }
        cout<<endl;
    }
    
    
    
    

}