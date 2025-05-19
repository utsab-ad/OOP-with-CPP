// Passing Object as an Argument in a Function 
/* class - Distance, data members inch and foot,
member function to input & display details 
and a member function to add Distance*/

#include<iostream>

    using namespace std;
    
    class Distance {
        int inch;
        int foot;
        
        public: 
        void input();
        void display();
        void addDistance(Distance D1, Distance D2);
    };
    
    int main() {
        Distance first, second, result;
        cout<<"\nFor First--> "<<endl;
        first.input();
        cout<<"\nFor Second--> "<<endl;
        second.input();
        
        result.addDistance(first, second);
        
        result.display();
        
        return 0;
        
        
    }
    
    void Distance:: input() {
        cout<<"Enter Inches: ";
        cin>>inch;
        cout<<"Enter Foot: ";
        cin>>foot;
    }
    
    void Distance:: addDistance(Distance D1, Distance D2) {
        inch = D1.inch + D2.inch;
        foot = D1.foot + D2.foot + (inch/12);
        inch = inch%12;
    }

    void Distance:: display() {
        cout<<"\nThe Result is : "<<foot<<" foot and "<<inch<<" inch"<<endl;
    }
    
    