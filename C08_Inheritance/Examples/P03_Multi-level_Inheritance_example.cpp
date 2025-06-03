/* Example Program to implement Multi-Level Inheritance using public
Inheritance mode*/

#include<iostream>
    using namespace std;
    
    class Parent {
        protected: 
            int a;
    
        public: 
            void input();
    };
    
    class Child: public Parent {
        protected: 
            int b;
            
        public: 
            void input();
    };
 
    class GrandChild: public Child {
        protected: 
            int c;
            int sum;
            
        public: 
            void input();
            void calculate();
    }; 
 
    int main() {
        GrandChild obj;
        
        cout<<"\nEnter the Numbers --> "<<endl;
        
        // obj.input(); this will call the third one, 
        obj.Parent:: input();
        obj.Child:: input();
        obj.GrandChild:: input();
        
        /*here the syntax: 
            "ObjectName.ClassName:: inheritedFunction" is used for resolve the 
            ambiguity error(error: when Parent class and the Child class contains same 
            member function name then compiler is confused :: function from which class is to 
            call.)
        */
        
        obj.calculate();
      
        return 0;
    }
    
    void Parent:: input() {
        cout<<"\nEnter First: ";
        cin>>a;
    }
    
    void Child:: input() {
        cout<<"Enter Second: ";
        cin>>b;
    }
    
    void GrandChild:: input() {
        cout<<"Enter Third: ";
        cin>>c;
    }
    
    void GrandChild:: calculate() {
        cout<<"\nCalculating ..."<<endl;
        sum = a + b + c;
        cout<<"The Sum is : "<<sum<<endl;
    }
    