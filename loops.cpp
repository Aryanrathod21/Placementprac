#include<iostream>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    //if else
    
    // if(n%2==0){
    //     cout<<"given number is even"<<endl;
    // }    
    // else{
    //     cout<<"given number is odd"<<endl;
    // }  

    //for loop

    // int sum=0;
    // for(int counter=1;counter<=n;counter++){
    //     sum=sum+counter;
    // }
    // cout<<sum;

    //do while loop

    // do{
    //     cout<<n;
    // }while(n>0);
    // return 0;

    //switch break continue

    float a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;

    char op;
    cout<<"enter an operator"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;    
    
    default:
        cout<<"please enter +,-,*,/ operators"<<endl;
        break;
    }


}