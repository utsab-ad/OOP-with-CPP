// Passing Object as an Argument in a Function 

/* class - Complex, data members real and imaginary,
member function to input & display details 
and a member function to add complex number*/

#include<iostream>

    using namespace std;
    
    class Complex {
        int real;
        int img;
        
        public: 
        void input();
        void display();
        void displayCom();
        void addComplex(Complex C1, Complex C2);
    };
    
    int main() {
        Complex first, second, result;
        cout<<"\nFor First--> "<<endl;
        first.input();
        cout<<"\nFor Second--> "<<endl;
        second.input();
        
        cout<<"\nFirst Complpex Number is:";
        first.displayCom();
         cout<<"\nSecond Complpex Number is:";
        second.displayCom();
        
        result.addComplex(first, second);
        
        result.display();
        
        return 0;
        
        
    }
    
    void Complex:: input() {
        cout<<"Enter Real: ";
        cin>>real;
        cout<<"Enter Imaginary: ";
        cin>>img;
    }
    
    void Complex:: addComplex(Complex C1, Complex C2) {
        real = C1.real + C2.real;
        img = C1.img + C2.img;
    }
    void Complex:: displayCom() {
        cout<<" "<<real<<" + "<<img<<"i"<<endl;
    }
    
    void Complex:: display() {
        cout<<"\nThe Result is : "<<real<<" + "<<img<<"i "<<endl;
    }
    
    