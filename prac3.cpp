#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter rows : ";
    cin>>n;
    int counter = 2;
    for (int i = 1; i <= n ; i++){
        for (int j = 1; j <= i; j++)
        {
            cout<<counter<<" ";
            counter++;
            counter++;

        }
        

        cout<<endl;
    }
    
    
    

}