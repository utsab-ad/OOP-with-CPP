/* Example Program to implement Hierarchical Inheritance using public
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
    
    class ChildOne: public Parent {
        protected: 
            int sum;
            
        public: 
            void calculate();
            void display();
    };

    class ChildTwo: public Parent {
        protected: 
            int prod;
            
        public: 
            void calculate();
            void display();
    };
    
    void ChildOne:: calculate() {
        sum = a+b+c;
    }
    
    void ChildTwo:: calculate() {
        prod = a*b*c;
    }
    
    void ChildOne:: display() {
        cout<<"\nThe sum is: "<<sum<<endl;
    }
     void ChildTwo:: display() {
        cout<<"\nThe Product is: "<<prod<<endl;
    }
    
    int main() {
        ChildOne Oobj;
        Oobj.inputParent();
        Oobj.calculate();
        Oobj.display();

        ChildTwo Tobj;

        Tobj.inputParent();
        Tobj.calculate();
        Tobj.display();

        
        return 0;
    }