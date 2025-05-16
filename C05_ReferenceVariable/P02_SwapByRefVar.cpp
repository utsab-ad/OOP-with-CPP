// WAP to swap two integer number by reference variable:

#include<iostream>

    using namespace std;
    
    void swapp(int &a, int &b) {
        int temp = a;
               a = b;
               b = temp;
    }
    
    int main() {
        /* here a is existing variable and x is reference variable*/
        
        int x=10;
        int y=20;
        
        cout<<"Before Swap"<<endl;
        
        cout<<"\n The value of x = "<<x<<endl;
        cout<<"\n The value of y = "<<y<<endl;
        
        swapp(x, y);
        
        cout<<"\n After Swap"<<endl;
        
        cout<<"\n The value of x = "<<x<<endl;
        cout<<"\n The value of y = "<<y<<endl;
    
        
        
        
        return 0;
    }