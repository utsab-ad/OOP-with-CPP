// Program to define the Static member function

#include<iostream>
    using namespace std;
    
    class Example {
        int num;
        static int counter;
        
        public:
            void set();
            void display();
            static void displayCounter();
    };
    
    int Example:: counter; 
    
    int main() {
        Example:: displayCounter();
        Example e1, e2;
        e1.set();
        e2.set();
        
        Example:: displayCounter();
        Example e3;
        e3.set();
        
        Example:: displayCounter();
        e1.display();
        e2.display();
        e3.display();
        
        return 0;
    }
    
    void Example:: set()
        {
            cout<<"Enter a Number: ";
            cin>>num;
            counter++;
        }
        
    void Example:: display()
        {
           cout<<"\n Number = "<<num<<endl; 
           cout<<"\n Counter = "<<counter<<endl;
        }
        
    void Example:: displayCounter()
        {
            cout<<"\n Counter is "<<counter<<endl;
        }