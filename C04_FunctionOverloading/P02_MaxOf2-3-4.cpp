// WAP to calculate the max among 2, 3, 4 numbers by Function Overloading

#include<iostream>

    using namespace std;
    
    int max(int x, int y) {
        return (x>y?x:y);
    }
    
    int max(int x, int y, int z) {
        return ((x>y && x>z) ? x : (y>z ? y : z));
    }
    int max(int x, int y, int z, int k) {
        return ((x>y && x>z && x>k) ? x : (y>z && y>k ? y : (z>k ? z : k)));
    }
    
    
    int main() {
        cout<<"Max is: "<<max(5,6)<<endl;
        cout<<"Max is: "<<max(5,10,3)<<endl;
        cout<<"Max is: "<<max(1,2,3,4)<<endl;
        
        return 0;
        
    }
    
    
    
    