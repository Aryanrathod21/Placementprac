#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter numbers till you want to print fibonacci series : ";
    cin>>n;
    int first = 0, second = 1, next;
for (int i = 3; i < n ; i++)
{
        next = first + second;
   
    first = second;
    second = next;
    

    cout<<next;
}

    

 
 
    


    

    

    



    return 0;
}