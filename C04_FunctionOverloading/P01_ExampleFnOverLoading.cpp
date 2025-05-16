//Example Program --> Function Overloading

#include<iostream>

    using namespace std;
    
    int add(int x, int y) {
        cout<<"Both int"<<endl;
        return (x+y);
    }
    
    int add(int x, int y, int z) {
        cout<<"All three are int"<<endl;
        return (x+y+z);
    }
    
    double add(double x, double y) {
        cout<<"Both double"<<endl;
        return (x+y);
    }
    
     double add(int x, double y) {
         cout<<" int and double"<<endl;
        return (x+y);
    }
     double add(double x, int y) {
         cout<<"double and int"<<endl;
        return (x+y);
    }
    
    int main() {
        cout<<add(5,6)<<endl;
        cout<<add(5,6,7)<<endl;
        cout<<add(5,6.1)<<endl;
        cout<<add(5.1,6.1)<<endl;
        cout<<add(5.1,6)<<endl;
        
        return 0;
        
    }
    
    
    
    