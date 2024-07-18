#include<iostream>
#include<string>
using namespace std;

int main(){

    string name;
    cout<<" enter string you want to reverse : ";
    cin>>name;
    int length = name.length();
    

    for (int i = 0; i <= length/2; i++)
    {
        swap( name[i] ,name[length-i-1] ); 
    }
    
    
    cout<<"reversed string : "<<name<<endl;

    


    return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string name;
//     cout << "Enter the string you want to reverse: ";
//     cin >> name;

//     int length = name.length();
//     for (int i = 0; i < length / 2; i++) {
//         swap(name[i], name[length - i - 1]);
//     }

//     cout << "Reversed string: " << name << endl;

//     return 0;
// }
