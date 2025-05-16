// Example Program: how to use Reference Variable: 

#include<iostream>

    using namespace std;
    
    int main() {
        
        int a = 10;
        int &x = a;
        /* here a is existing variable and x is reference variable*/
        
        cout<<"\n The value of a = "<<a<<endl;
        cout<<"\n The value of x = "<<x<<endl;
        
        x = 10001;
        
        cout<<"\n The value of a = "<<a<<endl;
        cout<<"\n The value of x = "<<x<<endl;
        
        cout<<"\n The address of a = "<<&a<<endl;
        cout<<"\n The address of x = "<<&x<<endl;
        
        return 0;
    }