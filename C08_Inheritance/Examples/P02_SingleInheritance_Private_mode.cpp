/* Example Program to implement Single Inheritance using private
Inheritance mode*/

#include<iostream>
    using namespace std;
    
    class Parent {
        protected: 
            int a, b, c;
    
        public: 
            void inputParent() {
                cout<<"\nEnter a Three Numbers --> "<<endl;
                cout<<"Enter First: ";
                cin>>a;
                cout<<"Enter Second: ";
                cin>>b;
                cout<<"Enter Third: ";
                cin>>c;
            }
    };
    
    class Child: private Parent {
        protected: 
            int sum;
            
        public: 
            void calculate();
            void display();
    };
    
    void Child:: calculate() {
        inputParent();
        sum = a+b+c;
    }
    
    void Child:: display() {
        cout<<"\nThe sum is: "<<sum<<endl;
    }
    
    int main() {
        Child obj;
        obj.calculate();
        obj.display();
        
        return 0;
    }